#include "vehicle.h"
#include"Type.h"
#include"Functionalitities.h"

int main(){
    Vehicle* arr[3];
    
    CreateObjects(arr);
    std::cout<<"Average Price:"<<AveragePrice(arr)<<std::endl;

}