#include "MainMenu.h"
#include "Helper.h"
#include <iostream>
#include <memory>

#ifndef BATTLESHIPS_GAMEMANAGER_H
#define BATTLESHIPS_GAMEMANAGER_H

#endif //BATTLESHIPS_GAMEMANAGER_H

enum GameManagerCommand
{
    QUIT_CMD = 'q',
};

enum GameMode
{
    NONE,
    PLACING_SHIPS,
    PLAYER_THINKING,
    GAME_OVER
};

/**
 * Responsible for managing whole game process
 * Knows when game is started/running/finished
 */
class GameManager
{
public:
    int run();
    int startGame();


    GameMode getCurrentMode() const;
    MainMenu* getMainMenu() const;

    GameMode setCurrentMode(GameMode mode);

    GameManager() : currentMode(GameMode::NONE), command(new char()), mainMenu(new MainMenu()) {}

    ~GameManager()
    {
      delete command;
      delete mainMenu;
    }

private:
    GameMode currentMode;
    char* command;
    MainMenu* mainMenu;
};
