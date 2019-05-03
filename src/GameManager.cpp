#include "GameManager.h"

MainMenu* GameManager::getMainMenu() const
{
    return mainMenu;
}

GameMode GameManager::getCurrentMode() const {
    return currentMode;
}

GameMode GameManager::setCurrentMode(GameMode mode) {
    currentMode = mode;

    return currentMode;
}

int GameManager::run()
{
    while (*command != GameManagerCommand::QUIT_CMD)
    {
        auto mainMenu = getMainMenu();

        MenuOption menuOption = mainMenu->display();

        switch (menuOption)
        {
            case MenuOption::NEW_GAME:
                startGame();
                break;
            case MenuOption::INCORRECT:
                std::cout << "Your input is invalid." << std::endl;

                *command = GameManagerCommand::QUIT_CMD;
                break;
            case MenuOption::QUIT:
                *command = GameManagerCommand::QUIT_CMD;
                break;
        }
    }

    std::cout << "Exiting..." << std::endl;

    return 0;
}

int GameManager::startGame()
{
    setCurrentMode(GameMode::PLACING_SHIPS);

    //TODO
    std::cout << "Enter your name, please..." << std::endl;

    std::string playerName;

    std::cin >> playerName;

    Helper::clearScreen();

    std::cout << "Welcome, " << playerName << std::endl;

    //TODO draw

    return 0;
}


