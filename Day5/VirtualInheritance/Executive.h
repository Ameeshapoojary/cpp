#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include"Employee.h"
#include <ostream>

class Executive:virtual public Employee
{
private:
    std::string _location;
public:
    Executive(std::string id,std::string name,std::string location)
    :Employee{id,name},_location(location) {}

    Executive(std::string location):_location(location){}

    void CalculateTax() override{
         std::cout<<"Executive pays 20% of tax"<<std::endl;
    }
    ~Executive() {
        std::cout<<"Executive Destroyed"<<std::endl;
    }

    

    std::string location() const { return _location; }

    friend std::ostream &operator<<(std::ostream &os, const Executive &rhs) {
        os 
           << " _location: " << rhs._location;
        return os;
    }
};

#endif // EXECUTIVE_H
