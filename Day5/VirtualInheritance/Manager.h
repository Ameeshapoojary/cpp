#ifndef MANAGER_H
#define MANAGER_H
#include"Employee.h"
#include <ostream>

class Manager:virtual public Employee
{
private:
    int _teamSize;
public:
    
    Manager(std::string id,std::string name,int teamSize)
    :Employee(id,name),_teamSize(teamSize){}

    void CalculateTax() override{
         std::cout<<"Manager pays 20% of tax"<<std::endl;
    }
    Manager(int teamSize):_teamSize(teamSize){}
    ~Manager() {
        std::cout<<"Manager destroyed"<<std::endl;
    }
    

    int teamSize() const { return _teamSize; }

    friend std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
        os 
           << " _teamSize: " << rhs._teamSize;
        return os;
    }
};

#endif // MANAGER_H
