#ifndef MONTALVD_SPACES_HPP
#define MONTALVD_SPACES_HPP
#include "Player.hpp"

class Spaces
{
private:
Spaces* UP;
Spaces* DOWN;
Spaces* LEFT;
Spaces* RIGHT;

public:
Spaces();
virtual void performSpace(Player*);
Spaces* getUp();
Spaces* getDown();
Spaces* getLeft();
Spaces* getRight();
void setUp(Spaces*);
void setDown(Spaces*);
void setLeft(Spaces*);
void setRight(Spaces*);
virtual char object();
};
#endif

