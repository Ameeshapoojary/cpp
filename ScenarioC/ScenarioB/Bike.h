#ifndef BIKE_H
#define BIKE_H

#include"BikeType.h"
#include"Vehicle.h"
#include <ostream>

class Bike:public Vehicle
{
private:
    float _bike_mileage;
    BikeType _bike_type;

public:
    //3+2
    Bike(std::string id,std::string brand,float price,VehicleType type,float milage,BikeType btype);
    Bike(std::string id,std::string brand,VehicleType type,float milage,BikeType btype );
    float CalculateTax() override;
    //4+2
    ~Bike() {
        std::cout<<"Object with ID"<<id()<<"is destroyed"<<std::endl;
    }

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);
};
std::string DisplayEnum(const BikeType value);

#endif // BIKE_H
