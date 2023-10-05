#include"Funtionalities.h"
#include"DepartmentType.h"
#include"Employee.h"
#include"Project.h"

void CreateObj(Employee *arr1[3], Project *arr2[3])
{
    arr2[0]=new Project("ABC",110,87968);
    arr2[1]=new Project("Adas",110,87968);
    arr2[2]=new Project("ABC",110,87968);


    arr1[0]=new Employee("101","Ame",85000.0f,DepartmentType::INTEGRATION,arr2[0]);
    arr1[1]=new Employee("102","Diya",873000.0f,DepartmentType::TESTING,arr2[1]);
    arr1[2]=new Employee("103","Dhee",95000.0f,DepartmentType::INTEGRATION,arr2[2]);

}

Employee *EmployeeWithHighestSalary(Employee *arr1[3])
{
    Employee* result=nullptr;
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

float AvgBudget(Project *arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total+=(arr[i])->budget();
    }
    return total/3;

}

void FreeMemory(Employee *arr1[3])
{
    //delete the inner Projet pointer
    for(int i=0;i<3;i++)
    {
        delete arr1[i]->project();
        delete arr1[i];
    }
}
