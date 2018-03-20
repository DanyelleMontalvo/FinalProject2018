#ifndef MONTALVD_FLOWERSHOP_HPP
#define MONTALVD_FLOWERSHOP_HPP
#include "Spaces.hpp"

class Flowershop : Spaces
{
    public:
    Flowershop();
    void performSpace(Player*);
    char object();
};
#endif