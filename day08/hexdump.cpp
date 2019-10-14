#include <iomanip>
#include <iostream>
#include <string>
// cerner_2^5_2019
#define ERROR_OUT(CHECK,MSG) if (CHECK) {std::cout << MSG << std::endl; return 0;}
std::string print_ascii(const char c) {
    if (c == '\a') return "\\a";
    if (c == '\b') return "\\b";
    if (c == '\f') return "\\f";
    if (c == '\n') return "\\n";
    if (c == '\r') return "\\r";
    if (c == '\t') return "\\t";
    if (c == '\v') return "\\v";
    return std::string(1, c);
}
int main(int argc, char* argv[]) {
    ERROR_OUT(argc != 2, "Usage: hexdump {file}")
    FILE* fIn = fopen(argv[1], "rb");
    ERROR_OUT(fIn == NULL, "Failed to open file '" << argv[1] << "'.")
    char buffer [17];
    long offset = 0;
    while (!feof(fIn)) {
        memset(buffer, 0, 17);
        int size = fread(buffer, 1, 16, fIn);
        std::cout << std::endl << std::setw(8) << offset << ":";
        offset += size;
        for (int index = 0; index < size; index++) {
            std::cout << std::setw(4) << print_ascii(buffer[index]);
        }
    }
    fclose(fIn);
    return 0;
}
