#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
        virtual void createVehicle()=0;
};

#endif