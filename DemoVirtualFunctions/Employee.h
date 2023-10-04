#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>


class Employee
{
private:
    /* data */
public:
    Employee()=default; 
    void applyForLeave(){
        std::cout<<"Employee applies for leave on the portal"<<std::endl;
    }
    virtual void payTax(){
        std::cout<<"Employee pay tax"<<std::endl;


    }
    virtual void Display(){
        std::cout<<"Employee Display"<<std::endl;


    }
    virtual ~Employee() {
        std::cout<<"Employee destroyed"<<std::endl;
    }
};

#endif // EMPLOYEE_H
