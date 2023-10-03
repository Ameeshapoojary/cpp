#ifndef CAR_H
#define CAR_H
#include<iostream>

#include"Vehicle.h"
#include"CarType.h"

class Car:public Vehicle
{
private:
CarType _car_type;
 
 public:
    //Calling getter since private property of parent cannot be accessed in child
   
    ~Car() {
         std::cout<<"Car part of Vehicle with Id:"<<id()<<"is destroyed"<<std::endl;
    }
    CarType carType() const {return _car_type;}//automatically
};

#endif // CAR_H
