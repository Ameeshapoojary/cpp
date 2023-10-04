#include"Employee.h"
#include"Manager.h"

int main(){
    Employee* arr[2];
    arr[0]=new Employee();
    arr[1]=new Manager();
    //Employee version of function called because applyforleave is non virtual
    //we are getting from parent bcz applyforleave is non virtual
    arr[0]->applyForLeave();
    arr[1]->applyForLeave();
    
    //version specific to the type of obj called because payTax is virtual
    arr[0]->payTax();
    arr[1]->payTax();

    //Employee version of function called because there is no Display in child class Manager
    arr[0]->Display();
    arr[1]->Display();

    delete arr[0];
    delete arr[1];
    //Here only parent obj gets deleted
    //If your upcasting the base case destructor shud be marked as virtual.

}