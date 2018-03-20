#ifndef MONTALVD_VENUE_HPP
#define MONTALVD_VENUE_HPP
#include "Spaces.hpp"

class Venue : Spaces
{
    private:
    bool isAttained;

    public:
    Venue();
    void performSpace(Player*);
    char object();
};
#endif