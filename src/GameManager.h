#include "MainMenu.h"
#include <iostream>
#include <memory>

#ifndef BATTLESHIPS_GAMEMANAGER_H
#define BATTLESHIPS_GAMEMANAGER_H

#endif //BATTLESHIPS_GAMEMANAGER_H

enum GameManagerCommands
{
    QUIT_CMD = 'q',
};


class GameManager
{
public:
    int run();

private:
    char command = ' ';

    std::unique_ptr<MainMenu> getMainMenu();
};