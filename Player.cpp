#include "Player.hpp"

Player::Player()
{
    HP = 40;
}

void Player::setHP(int val)
{
    HP = val;
}

int Player::getHP()
{
    return HP;
}