#include<iostream>
#include"Department.h"

class Student
{
private:
   int _roll_number;
   std::string _name;
   float _fees;
   char _grade;
   Department  _dept; //IT,CS,AI_ML

public:
    Student()=default;
    Student(
        int rnum,
        std::string name,
        float fees,
        char grade ,
        Department dept){
            this->_name=name;
            this->_fees=fees;
            this->_roll_number=rnum;
            this->_grade=grade;
            this->_dept=dept;
    }
    ~Student(){
        std::cout <<"Student with roll number:"
                  <<this->_roll_number
                  <<"is now destroyed\n";
    }
 };
 int main(){
    //stack
    Student s1(101,"ameesha",50400.0f,'A',Department::CS);
    Student s3(105,"anusha",50400.0f,'A',Department::IT);//this is at the scope of main function
    //stack memory-automatic storage (whenever the function move to endpoint
    //(end of main) -->it will be automatically deleted)
    //1stack-->1mb to 2mb
    
    //heap
    Student* s2= Student(102,"disha",67883.0f,'A',Department::AI_ML);
    Student* s4= Student(109,"diya",67883.0f,'A',Department::AI_ML);
    //heap allocation-->returns address
    //heap variable will not be automatically deallocated
    //it shud be triggered manually(delete operation)
    //-->this is memory leak
    //s2--->it is student pointer

    //First s2 gets deleted first bcz-->delete method will be called
    // first and then after end the main s1 gets deleted

    //After you create another obj in stack first s3 will be popped first
    //then s1

    //Array of obj-->array u store data of similar type
    Student arr[2]={s1,s3};//array of stack allocated student objects
    Student* heapArr[2]={s2,s4};

    delete s2;

 }