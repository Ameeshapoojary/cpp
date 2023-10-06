#include<iostream>
#include"Functionalities.h"
#include"Card.h"
#define SIZE 3
#include<iostream>

int main(){
    Card* arr[SIZE];

    try
    {
        CreateObj(arr);

        int res=HighestAnnualCharge(arr);
        std::cout<<"CVV"<<res<<std::endl;
        //Card** res{nullptr};
        MatchingIssuerCards(arr,CardType::MASTERCARD);
        for(int i=0;i<SIZE;i++){
        if(res[i]!=nullptr){
            std::cout<<*(res[i]);
        }
        else{
            break;
        } 
    }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}