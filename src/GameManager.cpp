#include "GameManager.h"
#include <iostream>

MainMenu* GameManager::getMainMenu()
{
    return this->mainMenu;
}

int GameManager::run()
{
    MainMenu* mainMenu = this->getMainMenu();

    MenuOption menuOption = mainMenu->display();

    if (menuOption == MenuOption::INCORRECT) {
        std::cout << "Your input is invalid. Exiting..." << std::endl;
    }

    if (menuOption == MenuOption::NEW_GAME) {
        //TODO do something
    }

    return 0;
}