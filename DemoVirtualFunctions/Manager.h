#ifndef MANAGER_H
#define MANAGER_H
#include<iostream>
#include"Employee.h"
class Manager:public Employee
{
private:
    /* data */
public:
    Manager()=default;
    void applyForLeave(){
        std::cout<<"Manager takes leave"<<std::endl;

    }
    void payTax(){
        std::cout<<"Manager pay tax"<<std::endl;


    }
    ~Manager() {
        std::cout<<"Manager destroyed"<<std::endl;
    }
};

#endif // MANAGER_H
