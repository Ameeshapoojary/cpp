#include<iostream>
#include"Employee.h"
#include"Project.h"
#include"Funtionalities.h"
#define SIZE 3//THE user should control the size
int main(){

    Employee* arr1[SIZE];
   // Project* arr2[3];

    try{
    CreateObj(arr1);
    Employee* emp=EmployeeWithHighestSalary(arr1);
    std::cout<<"Employee With Highest Salary:"<<emp->salary()<<std::endl;
    std::cout<<"Count Emp With Given Dept:"<<CountEmpWithGivenDept(arr1,DepartmentType::INTEGRATION)<<std::endl;
    std::cout<<"Avg Budget:"<<AvgBudget(arr1)<<std::endl;
    }catch(std::runtime_error& ex)
    {
        std::cout<<ex.what();
    }
    
    FreeMemory(arr1);
}