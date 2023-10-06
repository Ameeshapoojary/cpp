#ifndef CREDITCARD_H
#define CREDITCARD_H
#include"CardType.h"
#include<iostream>
#include"Card.h"
class CreditCard:public Card
{
private:
    int _transaction_limit;
public:
    CreditCard(int number,int cvvnumber,CardType issuer,float annualcharge,int limit, int translimit);

    float CalculateTaxOnCharge() override;

    int operator+(const CreditCard obj);
    
    ~CreditCard() {
        std::cout<<"Credit Card is destroyed";
    }
};

#endif // CREDITCARD_H
