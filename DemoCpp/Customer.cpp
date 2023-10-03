#include "Customer.h"

Customer::Customer(int id, std::string name, CustomerType ctype, float storeCredits)
:_customer_Id(id),_customer_Name(name),_type(ctype),_customerStoreCredits(storeCredits)
{
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_customer_Id: " << rhs._customer_Id
       << " _customer_Name: " << rhs._customer_Name
       << " _type: " << DisplayEnum(rhs._type)
       << " _customerStoreCredits: " << rhs._customerStoreCredits;
    return os;
}

std::string DisplayEnum(const CustomerType value)
{
    if(value==CustomerType::PREMIUM)
    {
        return "PREMIUM";
    }
    else if(value==CustomerType::REGULAR)
    {
        return "REGULAR";
    }
    else{
        return "VIP";
    }
}
