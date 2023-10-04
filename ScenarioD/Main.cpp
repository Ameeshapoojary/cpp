#include<iostream>
#include"Vehicle.h"
#include"Functionalities.h"
int main()
{
    Vehicle* arr[3];
    CreateObj(arr);
    std::cout<<"Average Price:"<<AveragePrice(arr)<<std::endl;
    MinimumPrice(arr);
}