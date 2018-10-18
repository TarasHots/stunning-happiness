#include "Helper.h"

bool Helper::is_digit(char ch) {
    return std::isdigit(static_cast<unsigned char>(ch));
}

void Helper::clearScreen() {
    std::cout << std::string(100, '\n');
}