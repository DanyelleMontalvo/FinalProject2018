#include "Flowershop.hpp"
#include "Spaces.hpp"
#include "Player.hpp"
#include <iostream>

Flowershop::Flowershop() : Spaces()
{

}

void performSpace(Player* player)
{
     player -> setHP(player -> getHP() + 1);
}

char object()
{
    return '*';
}