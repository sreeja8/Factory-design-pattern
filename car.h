#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include <iostream>
#include "vehicle.h"
using namespace std;

class Car : public Vehicle
{
    public:
        void createVehicle();
};

#endif

