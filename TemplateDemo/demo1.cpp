#include<iostream>

class Car

{
private:
    /* data */
public:
    Car
    (/* args */) {}
    void display();
    ~Car
    () {}
};
class Employee
{
private:
    /* data */
public:
    Employee(/* args */) {}
    void display();
    ~Employee() {}
};
int main(){
    Car* arr1[3];
    Employee* arr2[3];

    for(int i=0;i<3;i++){
        arr1[i]=new Car();
        arr2[i]=new Employee();

    }
    display<Car*>(arr1);
    display<Employee*>(arr2);
}