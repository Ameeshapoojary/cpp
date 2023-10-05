#include<iostream>
#include"Car.h"
#include"Functionalities.h"
int main(){
    Car* arr[3];
    CreateObj(arr);
    std::cout<<"Avg Fuel Capacity:"<<AvgFuelCapacity(arr)<<std::endl;
    std::cout<<"Find Count Of Given Brand:"<<FindCountOfGivenBrand(arr,CarCategory::SUV)<<std::endl;
  
    FindBestPassengerCar(arr,CarCategory::SUV);

    FreeMemory(arr);

}