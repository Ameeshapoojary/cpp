#include<iostream>
#include<list>
#include<vector>


//alias for data type
using ls=std::list<std::string>;//you can write ls instead of ...

template <typename T>
class Employee
{
private:
//Create the container of any type
    T _skills;
    std::string _id;
    float _age;

public:
    Employee(T skills,std::string id,float age;) 
    :_skills(skills),_id(id),_age(age){}
    ~Employee() {
        std::cout<<"Employee with ID"<<_id<<"is destroyed";
    }
};
int main(){
    std::list<std::string> skills={"coding","AI","VERSION CONTROL"};
    //object of class Employee of list of strings
    Employee<std::list<std::string>>*e1=new Employee<std::list<std::string>>(skills,"emp101",28.2f);

}