#include <winsock.h>
#include <iostream.h>

// cerner_2^5_2019

void main()
{
    char      szHostName[255];
    WSAData   wsaBuf;
    WSAStartup (MAKEWORD(1, 1), &wsaBuf);

    if (gethostname(szHostName, 255) != SOCKET_ERROR)
    {
        HOSTENT  *pHostEnt = gethostbyname(szHostName);

        IN_ADDR inetAddr;
        memcpy(&inetAddr, pHostEnt->h_addr_list[0], 4);

        char szTmp[255];
        strcpy(szTmp, inet_ntoa(inetAddr));

        cout << "Host    : " << szHostName << endl;
        cout << "Address : " << szTmp << endl;
        cout << "Full    : " << pHostEnt->h_name << endl;
    }
    else
    {
        cout << "Error!" << endl;
    }

    WSACleanup();
}
