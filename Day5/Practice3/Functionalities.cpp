#include "Functionalities.h"
#include"DebitCard.h"
#include"CreditCard.h"

bool checkNull(Card *arr[SIZE])
{
   bool flag=true;
   for(int i=0;i<SIZE;i++){
    if(arr[i]!=nullptr){
        
            flag=false;
        } 
   }
   return flag;
}

void CreateObj(Card *arr[SIZE])
{
    arr[0]=new DebitCard(2344,831,CardType::MASTERCARD,45672.0f,100000,DebitType::PREMIUM);
    arr[1]=new DebitCard(6644,531,CardType::RUPAY,45672.0f,100000,DebitType::SIGNATURE);
    arr[2]=new CreditCard(2344,131,CardType::MASTERCARD,992.0f,100000,45000);
    arr[3]=new CreditCard(2344,451,CardType::MASTERCARD,45672.0f,100000,45000);
    arr[4]=new CreditCard(2344,367,CardType::MASTERCARD,786.0f,100000,45000);


    std::cout<<"+ operator"<<*arr[2]+*arr[3]<<std::endl;

}

void MatchingIssuerCards(Card *arr[SIZE], CardType value, Card* res[SIZE])
{
    if(checkNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }
    int k=0; 
    for(int i=0; i < SIZE; i++) {
        if (arr[i] == nullptr){
            continue;
        }
        if (arr[i]->issuer() == value ) {
            res[k++] = arr[i];
        }
    }
}

int HighestAnnualCharge(Card *arr[SIZE])
{   
    if(checkNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }
    float max=arr[0]->annualCharge();
    int res = arr[0]->cvvNumber();
    float currentCharge=0.0f;
    for(int i=0;i<SIZE;i++)
    {   
        if (arr[i] == nullptr){
            continue;
        }
        currentCharge=arr[i]->annualCharge();
        if(currentCharge <max)
        {
            max=currentCharge;
            res=arr[i]->cvvNumber();    
        }
        }
        return res;
}
 
Card *PointerToMatchingNumber(Card *arr[SIZE],int number)
{
    if(checkNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }
    Card* res = nullptr;
    for(int i = 0; i < SIZE; i++ ) {

        if (arr[i] == nullptr){
            continue;
        }

        if(arr[i]->number() == number) {
            res = arr[i];
        }
        return res;
    
    
}
}

void FreeMemory(Card *arr[SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        delete arr[i];
    }
}
