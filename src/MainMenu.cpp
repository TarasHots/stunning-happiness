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

    int option = -1;

    std::cin >> option;

    if (this->isOptionValid(option)) {
        return this->convertToMenuOption(option);
    } else {
        return MenuOption::INCORRECT;
    }
}

bool MainMenu::isOptionValid(const int option) {
  if (option == MenuOption::NEW_GAME || option == MenuOption::QUIT) {
      return true;
  }

  return false;
}

MenuOption MainMenu::convertToMenuOption(const int option)
{
    switch (option) {
        case 1:
            return MenuOption::NEW_GAME;
        case 2:
            return MenuOption::QUIT;
        default:
            return MenuOption::INCORRECT;
    }
}
