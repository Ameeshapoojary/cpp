#ifndef CAR_H
#define CAR_H
#include<iostream>

#include"Vehicle.h"
#include"CarType.h"
#include"VehicleType.h"
#include"CarType.h"

class Car:public Vehicle
{
private:
CarType _car_type;
 
 public:
    //Calling getter since private property of parent cannot be accessed in child
    Car(std::string id, std::string brand, float price,VehicleType type,CarType cType);

    Car(std::string id, std::string brand, VehicleType type,CarType cType);

    float CalculateTax() override;

   
    ~Car() {
         std::cout<<"Car part of Vehicle with Id:"<<id()<<"is destroyed"<<std::endl;
    }
    CarType carType() const {return _car_type;}//automatically

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};
std::string DisplayEnum(const CarType value);


#endif // CAR_H
