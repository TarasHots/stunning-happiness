#ifndef BATTLESHIPS_FIELD_H
#define BATTLESHIPS_FIELD_H

#endif //BATTLESHIPS_FIELD_H

#include <vector>

enum Part
{
    NONE = 0,
    SHIP = 1,
    ENEMY_SHOT = 2,
    MY_SHOT =3,
    MY_DAMAGED_SHIP = 4,
    ENEMY_DAMAGED_SHIP = 5,
};

class Field
{
public:
    Field() {
        std::vector<Part> vec(fieldSize, defaultPart);
        field = vec; //todo check for better way to do this
    }

    bool isPlacedAllShips();
    bool isAllShipsDestroyed();

    bool placeShip(int size);
private:
    unsigned int fieldSize = 100;
    Part defaultPart = Part::NONE;
    std::vector<Part> field;
    int shipSizeOneCount = 4, shipSizeTwoCount = 3, shipSizeThreeCount = 2, shipSizeFourCount = 1;
    bool placedAllShips = false, allShipsDestroyed = false;
};