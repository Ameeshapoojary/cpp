#include "Functionalitie.h"
#include"Vehicle.h"
#include"Car.h"

void CreateObj(Car *arr[3])
{
    arr[0]=new Car("v101","Maruti",870000.0f,VehicleType::CAR,CarType::SUV);
    arr[1]=new Car("v102","Honda",600000.0f,VehicleType::CAR,CarType::SEDAN);
    arr[2]=new Car("v103","Hyundai",800000.0f,VehicleType::CAR,CarType::SUV);

}

float AvgPrice(Car *arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total += (arr[i])->price();//if address is used to dereferencing ,mostly u shud use ->

    }
    return total/3;
    
}

void CallCalculateTax(Car *arr[3])
{
    for(int i=0;i<3;i++)
    {
        std::cout<<(arr[i])->CalculateTax()<<std::endl;
    }

}

void FreeMemory(Car *arr[3])
{
     for(int i=0;i<3;i++){
        delete arr[i];
    }//if u don't delete the memoey-->there will be memory leak
}
