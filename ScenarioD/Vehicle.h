#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include"VehicleType.h"

class Vehicle
{
private:
   std::string _id;
   std::string _brand;
   float _price;
   VehicleType _type;

public:
//dont use default constructor -->Vehicle()=default;
    Vehicle()=delete;//disabled default constructor
    Vehicle(const Vehicle&)=default;//defaulted copy constructor
    Vehicle(std::string id,std::string brand,float price,VehicleType type);
    //Different version of CalculateTax

    float CalculateTax();
    float CalculateTax(float tax_percent);
    float CalculateTax(float cgst,float sgst);
    ~Vehicle() {
        std::cout<<"Vehicle ID:"<<_id<<"is destroyed"<<std::endl;
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
    
};

std::string DisplayEnum(const VehicleType value);

#endif // VEHICLE_H
