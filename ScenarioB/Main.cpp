#include<iostream>
#include"Car.h"
#include"Functionalitie.h"

int main(){
    // 1Car pointer-->8 bytes
    // 3 location reserved each loc can store 8 byte(address)
    Car* arr[3];
    
    CreateObj(arr);
    std::cout<<"Average Price:"<<AvgPrice(arr)<<std::endl;
    CallCalculateTax(arr);
    FreeMemory(arr);
}