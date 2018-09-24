#include "Helper.h"
#include <cctype>

bool Helper::is_digit(char ch) {
    return std::isdigit(static_cast<unsigned char>(ch));
}