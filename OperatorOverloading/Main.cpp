#include<iostream>
#include<memory>
#include"Vehicle.h"
#include"VehicleType.h"

int main()
{
    Vehicle v1("v101","Maruti",890000.0f,VehicleType::CAR);
    Vehicle v2("v102","Maruti",890000.0f,VehicleType::CAR);

    Vehicle* v3=new Vehicle("v101","Maruti",890000.0f,VehicleType::CAR);
    Vehicle* v4=new Vehicle("v102","Maruti",890000.0f,VehicleType::CAR);



    float ans=v1+v2 ;
    std::cout<<v1+v2<<std::endl;
    std::cout<<(*v3) +(*v4)<<std::endl;


}