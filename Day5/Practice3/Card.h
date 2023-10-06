#ifndef CARD_H
#define CARD_H
#include<iostream>
#include"CardType.h"
class Card
{
private:
    int _number;
    int _cvv_number;
    CardType _issuer;
    float _annual_charge;
    int _limit ;

public:
    Card(int number,int cvvnumber,CardType issuer,float annualcharge,int limit);

    virtual float CalculateTaxOnCharge()=0;
    virtual ~Card() {
        std::cout<<"The card with number"<<_number<<"is destroyed"<<std::endl;
    }

    int number() const { return _number; }

    int cvvNumber() const { return _cvv_number; }

    float annualCharge() const { return _annual_charge; }

    CardType issuer() const { return _issuer; }

    int limit() const { return _limit; }

    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);

    
};
std::string DisplayEnum(const CardType value);

#endif // CARD_H
