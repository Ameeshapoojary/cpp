#include<iostream>
#include<list>
#include<vector>
//Alternate name for datatype
using ls=std::list<std::string>;
//Make the class as template type
template <typename T>
class Employee
{
private:
//Create the container of any type
   //std::list<std::string>  _skills;
   //replace the specific datatype 
   T  _skills;
    std::string _id;
    float _age;

public:
    Employee( std::list<std::string> skills,std::string id,float age) 
    :_skills(skills),_id(id),_age(age){}
    ~Employee() {
        std::cout<<"Employee with ID"<<_id<<"is destroyed";
    }

    template <typename T>
    friend std::ostream &operator<<(std::ostream &os, const Employee<T> &rhs) {//<T><T>  make it one
        // os << "_skills: " << rhs._skills
        os << "_skills: ";
        //for eact loop(range-based for cpp)
        for(std::string element :rhs._skills)
        {
            os<<element<<"\t";
        }
        os << " _id: " << rhs._id
           << " _age: " << rhs._age;
        return os;
        //makes the whole list to be printed in the os
    }
    
};
int main(){
    std::list<std::string> skills={"coding","AI","VERSION CONTROL"};
    //object of class Employee of list of strings
    //Employee*e1=new Employee(skills,"emp101",28.2f);
    // Employee<T>*e1=new Employee<T>(skills,"emp101",28.2f);
    // Employee<std::list<std::string>>*e1=new Employee<std::list<std::string>>(skills,"emp101",28.2f);
    Employee<ls>*e1=new Employee<ls>(skills,"emp101",28.2f);

}