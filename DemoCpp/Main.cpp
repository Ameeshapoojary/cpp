#include<iostream>
#include"Customer.h"
#include"Functionalities.h"
int main(){
    Customer* arr[3];
    CreateObj(arr);
    std::cout<<"Average"<<AvgStoreCredits(arr)<<std::endl;

}