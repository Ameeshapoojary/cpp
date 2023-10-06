#include "Card.h"

Card::Card(int number, int cvvnumber,CardType issuer, float annualcharge,int limit)
:_number(number),_cvv_number(cvvnumber),_issuer(issuer),_annual_charge(annualcharge),_limit(limit) 
{
    if(number=1000 && number <1000)
    {
       _number=number;
    }
    else{
        std::runtime_error("Invalid Number for Card");
    }

    if(cvvnumber=1000 && cvvnumber <1000)
    {
       _cvv_number=cvvnumber;
    }
    else{
        std::runtime_error("Invalid CVV for Card");
    }

}

std::ostream &operator<<(std::ostream &os, const Card &rhs) {
    os << "_number: " << rhs._number
       << " _cvv_number: " << rhs._cvv_number
       << " _issuer: " << DisplayEnum(rhs._issuer)
       << " _annual_charge: " << rhs._annual_charge
       << " _limit: " << rhs._limit;
    return os;
}


std::string DisplayEnum(const CardType value)
{
    if(value==CardType::MASTERCARD)
    {
        return "MASTERCARD";

    }
    else if(value==CardType::RUPAY)
    {
        return "RUPAY";
    }
    else{
        return "VISA";
    }
}
