#include<iostream>
#include"Vehicle.h"
#include"Functionalitie.h"


int main(){
    // 1Car pointer-->8 bytes
    // 3 location reserved each loc can store 8 byte(address)
    Vehicle* arr[3];
    //container type shud be parent type
    
    CreateObj(arr);
    std::cout<<"Average Price:"<<AvgPrice(arr)<<std::endl;
    CallCalculateTax(arr);
    FreeMemory(arr);
}