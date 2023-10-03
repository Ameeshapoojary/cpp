#include "Functionalitie.h"
#include"Vehicle.h"
#include"Car.h"
#include"Bike.h"

void CreateObj(Vehicle* arr[3])
{
    arr[0]=new Car("v101","Maruti",870000.0f,VehicleType::CAR,CarType::SUV);
    arr[1]=new Bike("bk11" ,"Bajaj",300000.0f,VehicleType::BIKE,31.0f,BikeType::SPORTS);
    arr[2]=new Car("v103","Hyundai",800000.0f,VehicleType::CAR,CarType::SUV);

    //TO PRINT ACTUAL OBJ OF THE ADDRESS

    for(int i=0;i<3;i++)
    {
        std::cout << *(arr[i]) <<std::endl;
    }

}

float AvgPrice(Vehicle* arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total += (arr[i])->price();//if address is used to dereferencing ,mostly u shud use ->

    }
    return total/3;
    
}

void CallCalculateTax(Vehicle *arr[3])
{
    for(int i=0;i<3;i++)
    {
        std::cout<<(arr[i])->CalculateTax()<<std::endl;
    }

}

void FreeMemory(Vehicle *arr[3])
{
     for(int i=0;i<3;i++){
        delete arr[i];
    }//if u don't delete the memoey-->there will be memory leak
}
