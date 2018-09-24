#include "GameManager.h"

std::unique_ptr<MainMenu> GameManager::getMainMenu()
{
    std::unique_ptr<MainMenu> menu(new MainMenu);

    return menu;
}

int GameManager::run()
{
    while (command != GameManagerCommands::QUIT_CMD)
    {
        auto mainMenu = getMainMenu();

        MenuOption menuOption = mainMenu->display();

        switch (menuOption)
        {
            case MenuOption::NEW_GAME:
                //TODO implement game start
                break;
            case MenuOption::INCORRECT:
                std::cout << "Your input is invalid. Exiting..." << std::endl;

                if (mainMenu->tryAgain()) continue;

                command = GameManagerCommands::QUIT_CMD;
                break;
            case MenuOption::QUIT:
                command = GameManagerCommands::QUIT_CMD;
                break;
        }
    }

    return 0;
}