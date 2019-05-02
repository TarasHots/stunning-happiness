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

    //no need to store it, so can be removed on out of scope
    std::unique_ptr<char> option(new char());

    if (this->isOptionValid(*option.get())) {
        return this->convertToMenuOption(*option.get());
    } else {
        return MenuOption::INCORRECT;
    }
}

/**
 * Introduces more verbosity
 *
 * @return
 */
bool MainMenu::tryAgain() {
    std::cout << "Wanna try again?(Y/N)" << std::endl;

    char option = ' ';

    std::cin >> option;

    return option == 'Y';
}

/**
 * Validates input character
 *
 * @param ch
 * @return
 */
bool MainMenu::isOptionValid(const char& ch) {
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
MenuOption MainMenu::convertToMenuOption(const char& ch)
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
