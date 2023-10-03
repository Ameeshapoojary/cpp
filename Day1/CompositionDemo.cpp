//  Composition:
//  class A is made by using class B in
//  such a way that class B cannot exist independently
// but class A has its own existence
#include <iostream>
class DebitCard
{
private:
    int _cvv_number;
    std::string _card_number;
public:
    DebitCard(int cvv,std::string number)
    :_cvv_number(cvv),_card_number(number) {
        // this->_cvv_number=cvv;
        // this->_card_number=number;
    }
    ~DebitCard() {
        std::cout <<"debit card destroyed\n";
    }
};
//DebitCard* card=new DebitCard(.....);
class Account
{
private:
    // DebitCard obj; //DebitCard* DebitCard&
    DebitCard* obj;
    std::string _name;
public:
    Account(DebitCard* card,std::string name)
    :obj(card),_name(name) //now the obj is fully initialized
    {//DebitCard card-->stack allocated debit card
        // this->obj=card;
        // this->_name->name;
        
    }
    ~Account() {}

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
        os << "obj: " << rhs.obj
           << " _name: " << rhs._name;
        return os;
    
    }
};
int main(){
    Account* ac1=new Account(new DebitCard(781,"4323 64"),"Ameesha" );
    std::cout << *ac1;
}

/*
int n1=10;// stack(automatic storage)
int* n1=new int(10) //heap

//card is a stack allocated DebitCard instance
DebitCard card-stack(automatic storage)
DebitCard card-->stack allocated debit card

//card
*/