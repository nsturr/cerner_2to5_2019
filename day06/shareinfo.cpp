#define UNICODE
#include <iostream>
#include <windows.h>
#include <lm.h>

// cerner_2^5_2019

int
wmain(int argc, wchar_t **argv)
{
    if (argc != 2)
    {
        std::wcout << L"Need share name (see NET SHARE)." << std::endl;
        return 1;
    }

    SHARE_INFO_502 * shareInfo = NULL;
    NET_API_STATUS netStat = NetShareGetInfo(NULL, argv[1], 502, (LPBYTE *)&shareInfo);

    if (netStat != NERR_Success)
    {
        std::wcout << L"Error retriving share '" << argv[1] << L"' info." << std::endl;
        return 1;
    }

    std::wcout << shareInfo->shi502_netname << L" => " << shareInfo->shi502_path << std::endl;

    NetApiBufferFree(shareInfo);

    return 0;
}
