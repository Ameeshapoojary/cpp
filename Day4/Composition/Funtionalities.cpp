#include"Funtionalities.h"
#include"DepartmentType.h"
#include"Employee.h"
#include"Project.h"

bool CheckNull(Employee *arr[3])
{
    bool flag=true;
    for(int i=0;i<3;i++){
        if(arr[i]!=nullptr)
            flag=false;
    }

    return flag;
}

void CreateObj(Employee *arr1[3])
{
    arr1[0]=new Employee{
        "E101",
        "Ameesha",
        678889.0f,
        DepartmentType::DEVELOPMENT,
        new Project("KAP",49,568363.0f)
    };
    arr1[1]=new Employee{
        "E101",
        "Diya",
        878889.0f,
        DepartmentType::INTEGRATION,
        new Project("Autosar",49,568363.0f)
    };
    arr1[2]=new Employee{
        "E101",
        "Ameesha",
        508889.0f,
        DepartmentType::TESTING,
        new Project("ADAS",49,568363.0f)
    };


}

Employee *EmployeeWithHighestSalary(Employee *arr1[3])
{   
    if(CheckNull(arr1)){
        //data is empty
        throw std::runtime_error("Data is empty");
    }
    //keep all the pointer in position
    Employee* result=arr1[0];
    // Employee* result=nullptr;
    float max=arr1[0]->salary();//assume first salary is highest
    
    //take one variable for recording current position object's salary in loop
    float currentSal=0.0f;
    for(int i=0;i<3;i++){
        //fetch current position employee's salary
        currentSal=arr1[i]->salary();
        // id currentSal is more than max,update  max and result pointers
        if(currentSal > max){
            max=currentSal;
            result=arr1[i];
        }
    }
    //return result after whole loop only
    return result;

}


int CountEmpWithGivenDept(Employee *arr1[3], DepartmentType type)
{
    int count=0;
    for(int i=0;i<3;i++)
    {
        if((arr1[i])->dept() == type)
        {
            count++;
        }
    }
    return count;
}
//To get Avg Budget of project by Employee
float AvgBudget(Employee *arr[3])
{
    if(CheckNull(arr)){
        //data is empty
        throw std::runtime_error("Data is empty");
    }
    float total=0.0f;
    for(int i=0;i<3;i++){
        total+=(arr[i])->project()->budget();
    }
    return total/3;

}

void FreeMemory(Employee *arr1[3])
{ 
    //checknull is not required here
    //delete the inner Projet pointer
    for(int i=0;i<3;i++)
    {
        delete arr1[i];//ensure this also deletes Project
    }
}
