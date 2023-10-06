#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3
#include"Card.h"


/*
A function to check if all parameter in the container is nullptr
i.e if data is empty
*/
    bool checkNull(Card* arr[SIZE]); 

/*
    A function to create 3 object of CreditCard
*/
    void CreateObj(Card* arr[SIZE]);

    void MatchingIssuerCards(Card *arr[SIZE], CardType value, Card* res[SIZE]);

    int HighestAnnualCharge(Card *arr[SIZE]);
 
    Card* PointerToMatchingNumber(Card* arr[SIZE],int number);

    void FreeMemory(Card* arr[SIZE]);
#endif // FUNCTIONALITIES_H

