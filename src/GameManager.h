#include "MainMenu.h"

#ifndef BATTLESHIPS_GAMEMANAGER_H
#define BATTLESHIPS_GAMEMANAGER_H

#endif //BATTLESHIPS_GAMEMANAGER_H

class GameManager
{
public:
    int run();

private:
    MainMenu* getMainMenu();
    MainMenu* mainMenu;
};