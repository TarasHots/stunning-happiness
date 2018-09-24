#include "MainMenu.h"
#include "Helper.h"
#include <iostream>

/**
 * Shows main menu; returns either valid or incorrect option
 *
 * @return
 */
MenuOption MainMenu::display() {
    std::cout << "Select option:" << std::endl;
    std::cout << "1.New game" << std::endl;
    std::cout << "2.Quit" << std::endl;

    char option = ' ';

    std::cin >> option;

    if (this->isOptionValid(option)) {
        return this->convertToMenuOption(option);
    } else {
        return MenuOption::INCORRECT;
    }
}

/**
 * Validates input character
 *
 * @param ch
 * @return
 */
bool MainMenu::isOptionValid(const char &ch) {
    if (Helper::is_digit(ch)) {
        int selected_option = ch - '0';// casting char to int like this ¯\_(ツ)_/¯

        if (selected_option == MenuOption::NEW_GAME || selected_option == MenuOption::QUIT) {
            return true;
        }
    }

    return false;
}

/**
 * Converts character to fancy enum value
 *
 * @param ch
 * @return
 */
MenuOption MainMenu::convertToMenuOption(const char &ch)
{
    switch (ch) {
        case '1':
            return MenuOption::NEW_GAME;
        case '2':
            return MenuOption::QUIT;
        default:
            return MenuOption::INCORRECT;
    }
}
