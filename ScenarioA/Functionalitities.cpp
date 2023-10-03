#include "Functionalitities.h"
#include"vehicle.h"
#include"Type.h"

void CreateObjects(Vehicle *container[3])
{
    //container 0 index now holds the address of the object on the heap
    //You need to just save the address not the the obj -->so no need to write *
    container[0]=new Vehicle("v101","Maruti",Type::CAR,870000.0f);
    container[1]=new Vehicle("v102","Honda",Type::CAR,870000.0f);
    container[2]=new Vehicle("v103","Toyato",Type::CAR,870000.0f);
  
}

float AveragePrice(Vehicle *container[3])
{ 
    float total=0.0f;
    for(int i=0;i<3;i++){
        total += (container[i])->price();//if address is used to dereferencing ,mostly u shud use ->

    }
    return total/3;

}
