#include "CreditCard.h"
#include"Card.h"

CreditCard::CreditCard(int number, int cvvnumber, CardType issuer, float annualcharge, int limit, int translimit)
:Card(number,cvvnumber,issuer,annualcharge,limit),_transaction_limit(translimit)
{
}

float CreditCard::CalculateTaxOnCharge()
{
    if(issuer()==CardType::VISA)
    {
        return (limit() /100)*annualCharge();
    }
    else if(issuer()==CardType::MASTERCARD)
    {
        return (limit() /50)*annualCharge();
    }
    else
    {
        return (limit() /10)*annualCharge();
    }
}

int CreditCard::operator+(const CreditCard obj)
{
    return limit()+obj.limit();
}
