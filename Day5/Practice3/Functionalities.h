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

    Card** MatchingIssuerCards(Card *arr[SIZE],CardType value);

    int HighestAnnualCharge(Card *arr[SIZE]);
 
    Card* PointerToMatchingNumber(Card* arr[SIZE],int number);


#endif // FUNCTIONALITIES_H

