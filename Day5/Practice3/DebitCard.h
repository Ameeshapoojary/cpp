#ifndef DEBITCARD_H
#define DEBITCARD_H
#include"DebitType.h"
#include"Card.h"
class DebitCard:public Card
{
private:
    DebitType _category;
public:

    DebitCard(int number,int cvvnumber,CardType issuer,float annualcharge,int limit,DebitType category);
    float CalculateTaxOnCharge() override;
    ~DebitCard() {
        std::cout<<"Debit Card is destroyed"<<std::endl;
    }
};

#endif // DEBITCARD_H
