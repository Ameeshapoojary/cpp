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
    arr[0]=new DebitCard(2344,231,CardType::MASTERCARD,45672.0f,100000,DebitType::PREMIUM);
    arr[1]=new DebitCard(6644,231,CardType::RUPAY,45672.0f,100000,DebitType::SIGNATURE);
    arr[2]=new CreditCard(2344,231,CardType::MASTERCARD,45672.0f,100000,45000);
    arr[3]=new CreditCard(2344,231,CardType::MASTERCARD,45672.0f,100000,45000);
    arr[4]=new CreditCard(2344,231,CardType::MASTERCARD,45672.0f,100000,45000);

}

Card** MatchingIssuerCards(Card *arr[SIZE], CardType value)
{
    Card* res[SIZE]={nullptr};
    int k=0;
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]->issuer()==value){
            res[k++]=arr[i];
        }
    }
    return res;
}

int HighestAnnualCharge(Card *arr[SIZE])
{
    Card* result=arr[0];
    float max=arr[0]->annualCharge();
    int cvv=arr[0]->cvvNumber();
    float currentCharge=0.0f;
    for(int i=0;i<SIZE;i++)
    {
        currentCharge=arr[i]->annualCharge();
        if(currentCharge >max)
        {
            max=currentCharge;
            result=arr[i];
            cvv=arr[i]->cvvNumber();
        }
        }
        return cvv;
}

Card *PointerToMatchingNumber(Card *arr[SIZE],int number)
{
    Card* res=nullptr;
    for(int i=0;i<SIZE;i++){
        if(arr[i]==nullptr){
            continue;
        }
        if(arr[i]->number() ==number){
            res=arr[i];
        }
    }
    if(res ==nullptr)
    {
        std::runtime_error("No matching Card Found");
    }
    else{
        return res;
    }
}
