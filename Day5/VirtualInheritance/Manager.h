#ifndef MANAGER_H
#define MANAGER_H
#include"Employee.h"

class Manager:virtual public Employee
{
private:
    int _teamSize;
public:
    
    Manager(std::string id,std::string name,int teamSize)
    :Employee(id,name),_teamSize(teamSize){}

    void CalculateTax() override{
         std::cout<<"Executive pays 20% of tax"<<std::endl;
    }
    ~Manager() {
        std::cout<<"Manager destroyed"<<std::endl;
    }

    int teamSize() const { return _teamSize; }
};

#endif // MANAGER_H
