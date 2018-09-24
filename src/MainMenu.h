#ifndef BATTLESHIPS_MAINMENU_H
#define BATTLESHIPS_MAINMENU_H

#endif //BATTLESHIPS_MAINMENU_H

enum MenuOption {
    INCORRECT = -1,
    NEW_GAME = 1,
    QUIT = 2,
};

class MainMenu
{
public:
    MenuOption display();
    bool tryAgain();

private:
    bool isOptionValid(const char &ch);
    MenuOption convertToMenuOption(const char &ch);
};
