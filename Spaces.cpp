#include "Spaces.hpp"
#include "Player.hpp"
#include <iostream>

Spaces::Spaces()
{
    UP = NULL;
    DOWN = NULL;
    LEFT = NULL;
    RIGHT = NULL;
};

void Spaces::performSpace(Player* player)
{
    player -> setHP(player -> getHP() - 1);
}

Spaces* Spaces::getUp()
{
    return UP;
}

Spaces* Spaces::getDown()
{
    return DOWN;
}

Spaces* Spaces::getLeft()
{
    return LEFT;
}

Spaces* Spaces::getRight()
{
    return RIGHT;
}

void Spaces::setUp(Spaces* S)
{
    UP = S;
}

void Spaces::setDown(Spaces* S)
{
    DOWN = S;
}

void Spaces::setLeft(Spaces* S)
{
    LEFT = S;
}

void Spaces::setRight(Spaces* S)
{
    RIGHT = S;
}

char Spaces::object()
{
    
    return '*';
}