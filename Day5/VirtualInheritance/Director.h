#ifndef DIRECTOR_H
#define DIRECTOR_H
#include"Employee.h"
#include"Manager.h"
#include"Executive.h"
#include <ostream>
class Director:public Manager,public Executive
{
private:
    int _budget;
public:
    // Director(std::string id,std::string name,int teamSize,std::string location,int budget)
    // :Employee{id,name},Manager{id,name,teamSize},Executive{id,name,location}
    // ,_budget(budget) {}

    Director(std::string id,std::string name,int teamSize,std::string location,int budget)
    :Employee{id,name},Manager{teamSize},Executive{location}
    ,_budget(budget) {}

    void CalculateTax(){
        std::cout<<"Director pays tax 50%"<<std::endl;
    }
    ~Director() {
        std::cout<<"Director destroyed"<<std::endl;
    }
    

    int budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Director &rhs) {
        os << static_cast<const Employee &>(rhs)
        
           << static_cast<const Executive &>(rhs)
           << " _budget: " << rhs._budget;
        return os;
    }
};

#endif // DIRECTOR_H
