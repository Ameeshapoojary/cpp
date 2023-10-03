#include "Functionalities.h"

void CreateObj(Customer *arr[3])
{
    arr[0]=new Customer(101,"Ame",CustomerType::REGULAR,400.09f);
    arr[1]=new Customer(102,"Dhee",CustomerType::PREMIUM,5000.09f);
    arr[2]=new Customer(101,"Piya",CustomerType::VIP,34400.09f);

    for(int i=0;i<3;i++)
    {
        std::cout<<*(arr[i])<<std::endl;
    }

}

float AvgStoreCredits(Customer *arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total+=(arr[i])->customerStoreCredits();
    }
    return total/3;

}
