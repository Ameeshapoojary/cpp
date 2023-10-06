#include "DebitCard.h"
#include"Card.h"

DebitCard::DebitCard(int number, int cvvnumber, CardType issuer, float annualcharge,int limit, DebitType category)
:Card(number,cvvnumber,issuer,annualcharge,limit),_category(category)
{
}

float DebitCard::CalculateTaxOnCharge()
{
   CalculateTaxOnCharge
