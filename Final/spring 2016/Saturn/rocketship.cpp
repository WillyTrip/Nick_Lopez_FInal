#include "rocketship.h"

RocketShip::Rocketship(int fuel_, string name_)
{
    fuel_ = 0;
    name_ = "";
}

void RocketShip::setfuel()
{
    fuel_ = fuel;
}

void RocketShip::setName()
{
    name_ = name;
}

int RocketShip::getFuel(int fuel)
{
    return fuel_;
}

string RocketShip::getName(string name)
{
    return name_;
}