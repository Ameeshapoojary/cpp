#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include"Type.h"




class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    Type _type;
    float _price;
public:
    
    Vehicle(const Vehicle& obj )=default;
    Vehicle(std::string id,std::string brand,Type type,float price );
    Vehicle(std::string id,std::string brand,Type type );
    //Declaring abstract method in c++
    virtual float CalculateTax()=0;

    ~Vehicle() {
        std::cout<<"Object with ID"<<_id<<"is destroyed"<<std::endl;
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    Type type() const { return _type; }

    float price() const { return _price; }
};
#endif // VEHICLE_H
