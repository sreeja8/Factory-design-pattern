#ifndef BIKE_H_INCLUDED
#define BIKE_H_INCLUDED

#include <iostream>
#include "vehicle.h"
using namespace std;

class Bike : public Vehicle
{
    public:
        void createVehicle();
};

#endif

