#ifndef DIRECTOR_H
#define DIRECTOR_H
#include"Employee.h"
#include"Manager.h"
#include"Executive.h"
class Director:public Manager,public Executive
{
private:
    int _budget;
public:
    Director(std::string id,std::string name,int teamSize,std::string location,int budget)
    :Employee{id,name},Manager{id,name,teamSize},Executive{id,name,location}
    ,_budget(budget) {}

    void CalculateTax(){
        std::cout<<"Director pays tax 50%"<<std::endl;
    }
    ~Director() {
        std::cout<<"Director destroyed"<<std::endl;
    }

    int budget() const { return _budget; }
};

#endif // DIRECTOR_H
