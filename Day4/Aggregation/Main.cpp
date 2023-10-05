#include<iostream>
#include"Employee.h"
#include"Project.h"
#include"Funtionalities.h"
int main(){

    Employee* arr1[3];
    Project* arr2[3];

    CreateObj(arr1,arr2);
    
    std::cout<<"Employee With Highest Salary:"<<*EmployeeWithHighestSalary(arr1)<<std::endl;
    std::cout<<"Count Emp With Given Dept:"<<CountEmpWithGivenDept(arr1,DepartmentType::INTEGRATION)<<std::endl;
    std::cout<<"Avg Budget:"<<AvgBudget(arr2)<<std::endl;
    FreeMemory(arr1);
}