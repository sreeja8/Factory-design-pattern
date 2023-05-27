#ifndef VEHICLE_FACTORY_H_INCLUDED
#define VEHICLE_FACTORY_H_INCLUDED

#include <iostream>
#include <string>
#include "car.h"
#include "bike.h"
using namespace std;

class VehicleFactory
{
    public:
        static Vehicle* getVehicle(string vehicleType);
};

#endif