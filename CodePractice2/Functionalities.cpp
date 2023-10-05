#include "Functionalities.h"

void CreateObj(Car *arr[3])
{
    arr[0]=new Car("123","Honda","abc",CarCategory::SEDAN,900889.0f,4,500);
    arr[1]=new Car("563","Honda","abc",CarCategory::SUV,3420889.0f,6,500);
    arr[2]=new Car("893","Maruti","abc",CarCategory::SPORTS_HATCHBACK,9000889.0f,2,500);

}

float AvgFuelCapacity(Car *arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total+=(arr[i])->getCarFuelCapacity();
    }
    return total/3;

}

int FindCountOfGivenBrand(Car *arr[3], CarCategory category)
{
    int count=0;
    for(int i=0;i<3;i++)
    {
        if(arr[i]->getCarCategory()==category)
        {
            count++;
        }
    }
    return count;
}

void FindBestPassengerCar(Car *arr[3], CarCategory category)
{
    Car* result=arr[0];
    int max=arr[0]->getCarSeatCount();
    int currentSeat=0;
   
    for(int i=0;i<3;i++){
        
        currentSeat=arr[i]->getCarSeatCount();
        if(currentSeat>max)
        {
            max=currentSeat;
            result=arr[i];
            

        }
    }
  
    result->getCarBrand();
    std::cout<<"Best Passenger Car:"<<"\n"<<"Car Brand:"<<result->getCarBrand()
    <<"\n"<<"Car Model:"<<result->getCarModel()<<std::endl;
}

void FreeMemory(Car *arr[3])

{
    for(int i=0;i<3;i++)
    {
        delete arr[i];  
          }
}
