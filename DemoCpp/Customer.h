#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include"CustomerType.h"
class Customer
{
private:
    int _customer_Id;
    std::string _customer_Name;
    CustomerType _type;
    float _customerStoreCredits;

public:
    Customer(const Customer& obj)=default;
    Customer(int id,std::string name,CustomerType ctype,float storeCredits);
    ~Customer() {
        std::cout<<"Customer ID"<<_customer_Id<<"is destroyed";
    }

    int customerId() const { return _customer_Id; }

    std::string customerName() const { return _customer_Name; }

    CustomerType type() const { return _type; }

    float customerStoreCredits() const { return _customerStoreCredits; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
};
std::string DisplayEnum(const CustomerType value );

#endif // CUSTOMER_H
