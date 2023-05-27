#include <iostream>
#include <string>
#include "vehicle_factory.h"
using namespace std;

int main()
{
    string vehicleType;
    cin>>vehicleType;
    Vehicle *vehicle = VehicleFactory::getVehicle(vehicleType);
    vehicle->createVehicle();
    return 0;
}