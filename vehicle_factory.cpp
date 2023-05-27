#include <iostream>
#include <string>
#include "vehicle_factory.h"
using namespace std;

Vehicle* VehicleFactory :: getVehicle(string vehicleType)
{
    Vehicle *vehicle;
    if(vehicleType == "car")
    {
        vehicle = new Car();
    }
    else if(vehicleType == "bike")
    {
        vehicle = new Bike();
    }
    return vehicle;
}