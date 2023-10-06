#include "DebitCard.h"
#include"Card.h"

DebitCard::DebitCard(int number, int cvvnumber, CardType issuer, float annualcharge,int limit, DebitType category)
:Card(number,cvvnumber,issuer,annualcharge,limit),_category(category)
{
}

float DebitCard::CalculateTaxOnCharge()
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
