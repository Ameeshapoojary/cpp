#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include"Type.h"//""-->which is created by you
class Vehicle
{
private:
     std::string _id;
     std::string _brand;
     Type _type;
     float _price;

public:
//3 constructor-2 parameterized c and one copy constructor
    Vehicle( 
        std::string id,
        std::string brand,
        Type type,
        float price
        );
    Vehicle( 
        std::string id,
        std::string brand,
        Type type
        );
        //Defaulted copy constructor
        //I will not write the body of copy constructor.compiler shud generate a default version of it during compilation

    Vehicle(const Vehicle&)=default;//Copy constructor
    
    /*
    Vehicle(const Vehicle& obj){//You can either write this copy constructor or above one
        this->_id=obj._id;
        this->_brand=obj._brand;
        this->_type=obj._type;
        this->_price=obj._price;
    }
    */
          
    ~Vehicle() {
      
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    Type type() const { return _type; }

    float price() const { return _price; }
};

#endif // VEHICLE_H
