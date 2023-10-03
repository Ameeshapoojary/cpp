#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>

#include"VehicleType.h"




class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    VehicleType _type;
    float _price;
public:
    
    Vehicle(const Vehicle& obj )=default;
    Vehicle(std::string id,std::string brand,float price,VehicleType type);
    Vehicle(std::string id,std::string brand,VehicleType type );
    //Declaring abstract method in c++
    virtual float CalculateTax()=0;

    virtual ~Vehicle() {
        std::cout<<"Object with ID"<<_id<<"is destroyed"<<std::endl;
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    VehicleType type() const { return _type; }

    float price() const { return _price; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
    
};
/*
    It takes one enum value and prints its string form
    based on the logic written inside the body
*/
std::string DisplayEnum(const VehicleType value);
#endif // VEHICLE_H
