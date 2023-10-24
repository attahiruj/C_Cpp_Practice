#include <iostream>
#include <cctype>

int main() {
    const int tx_speed = 960 / sizeof(char);
    char size_unit;
    unsigned long long unit = 0;
    unsigned long long file_size = 0;
    unsigned long long ttt_sec = 0;
    unsigned long long ttt_min = 0;
    unsigned long long ttt_hour = 0;
    unsigned long long ttt_day = 0;

    std::cout << "******************************\n";
    std::cout << "*         TX  <-> TTT        *\n";
    std::cout << "******************************\n";

    std::cout << "\n-> Enter file size (without unit): ";
    std::cin >> file_size;

    std::cout << "\n-> Enter size unit (B->byte | K->kilobyte | M->megabyte | G->gigabyte): ";
    std::cin >> size_unit;
