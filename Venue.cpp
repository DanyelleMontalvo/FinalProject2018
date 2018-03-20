#include "Venue.hpp"

Venue::Venue(): Spaces()
{
    bool isAttained = false;
};

void Venue::performSpace(Player* player)
{
    player -> setHP(player -> getHP() + 1);
    bool isAttained = true;
}

char Venue::object ()
{
    return '^';
}
