#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include"DepartmentType.h"
#include"Project.h"

//classt-->template
class Employee
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    DepartmentType _dept;
    Project* _project;

public:
    //U cannot use stack allocation size if u use deleted constructor
    Employee()=delete;
    Employee(const Employee&)=delete;//I dont want copy constructor
    Employee(std::string id, std::string name,float salary,DepartmentType dept,Project* project);
    ~Employee() {
        delete _project;
        std::cout<<"Employee name "<<_id<<" Object destroyed"<<std::endl;
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    DepartmentType dept() const { return _dept; }

    Project* project() const { return _project; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};
std::string DisplayEnum(const DepartmentType value);

#endif // EMPLOYEE_H
