#include <iostream>

int main() {
    // Print the header of the ASCII table
    std::cout << "ASCII Table" << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << "Character\tDecimal\tHexadecimal" << std::endl;

    for (int i = 32; i < 128; ++i) {
        // Print the character, its decimal value, and its hexadecimal value
        std::cout << static_cast<char>(i) << "\t\t" << i << "\t0x" << std::hex << i << std::dec << std::endl;
    }

    return 0;
}
