#include "GameManager.h"

std::unique_ptr<MainMenu> GameManager::getMainMenu()
{
    std::unique_ptr<MainMenu> menu(new MainMenu);

    return menu;
}

GameMode GameManager::getCurrentMode() const {
    return currentMode;
}

void GameManager::setCurrentMode(GameMode mode) {
    currentMode = mode;
}

int GameManager::run()
{
    while (command != GameManagerCommand::QUIT_CMD)
    {
        auto mainMenu = getMainMenu();

        MenuOption menuOption = mainMenu->display();

        switch (menuOption)
        {
            case MenuOption::NEW_GAME:
                startGame();
                break;
            case MenuOption::INCORRECT:
                std::cout << "Your input is invalid. Exiting..." << std::endl;

                if (mainMenu->tryAgain()) continue;

                command = GameManagerCommand::QUIT_CMD;
                break;
            case MenuOption::QUIT:
                command = GameManagerCommand::QUIT_CMD;
                break;
        }
    }

    return 0;
}

int GameManager::startGame()
{
    setCurrentMode(GameMode::PLACING_SHIPS);

    //TODO
    std::cout << "Enter your name, please..." << std::endl;

    std::string playerName;

    std::cin >> playerName;

    std::cout << "Welcome, " << playerName << std::endl;

    Helper::clearScreen();

    return 0;
}


