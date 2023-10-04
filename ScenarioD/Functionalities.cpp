#include "Functionalities.h"
#include"Vehicle.h"

void CreateObj(Vehicle *arr[3])
{
    arr[0]=new Vehicle("101","Honda",699.0f,VehicleType::CAR);
    arr[1]=new Vehicle("102","Honda",607999.0f,VehicleType::CAR);
    arr[2]=new Vehicle("103","Honda",607999.0f,VehicleType::CAR);
   
    for(int i=0;i<3;i++)
    {
        std::cout<<*(arr[i])<<std::endl;
    }
    
}

float AveragePrice(Vehicle *arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++)
    {
        total+=(arr[i])->price();
    }
    return total/3;

}

void MinimumPrice(Vehicle *arr[3])
{
    Vehicle* result=arr[0];
    float min=arr[0]->price();
    for(int i=0;i<3;i++)
    {
        if(arr[i]->price()<min){
        min=arr[i]->price();
        result=arr[i];
        }
    }
    std::cout<<"MinimumPrice:"<<*result<<std::endl;
        std::cout<<"MinimumPrice:"<<result->price()<<std::endl;


}