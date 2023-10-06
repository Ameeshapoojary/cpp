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
        std::cout<<"CVV:"<<res<<std::endl;
        Card* ans[SIZE] = {nullptr};
        
        MatchingIssuerCards(arr, CardType::MASTERCARD, ans);
        
        for(int i = 0; i < 5; i++ ) {
            if (ans[i] == nullptr) {
                break;
            }
            else {
                std::cout << *(ans[i]) << "\n";
            }
        }

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    FreeMemory(arr);
    
}