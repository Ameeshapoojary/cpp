#ifndef FUNTIONALITIES_H
#define FUNTIONALITIES_H
#include"Employee.h"
#include"Project.h"
/*
    A function to create 3 objects of project in an array.
    Also,create 3 objects of Employees in a separate array.
    Link one Project to one Employee

    Input:2 array(one-->Employee,second-->Project)
    Output:void 
*/

void CreateObj(Employee* arr1[3],Project* arr2[3]);


/*
    A function to return the pointer to thw Employee with the highest salary
*/
 Employee* EmployeeWithHighestSalary(Employee* arr1[3]);


/*
    A function to return the count of all Employees in the array
    whose _dept value matches with the second parameter passed to this function
*/

int CountEmpWithGivenDept(Employee* arr1[3],DepartmentType type);
/*
    Find the average _budget for all project
*/

float AvgBudget(Project* arr[3]);

/*
    A function to deallocate the heap reservation made throughout
*/

void FreeMemory(Employee* arr1[3]);
#endif // FUNTIONALITIES_H
