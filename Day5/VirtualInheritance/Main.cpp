#include<iostream>
#include"Employee.h"
#include"Director.h"

// int main(){
//     Employee* d1=new Director(
//         "101",
//         "Amith",
//         16,
//         "Bangalore",
//         178363.0f
//     );
//     std::cout<<*d1<<std::endl;//director object
//     delete d1;

// }

int main(){
    Director* d1=new Director(
        "101",
        "Amith",
        16,
        "Bangalore",
        178363.0f
    );
    std::cout<<*d1<<std::endl;//director object
    
    std::cout<<"Id from Employee :"<<d1->id()<<std::endl;
    std::cout<<"Name from Employee :"<<d1->name()<<std::endl;
    std::cout<<"Team size from Manager Section :"<<d1->teamSize()<<std::endl;
    std::cout<<"Location from Executive Section :"<<d1->location()<<std::endl;
    std::cout<<"Budget from Director Section :"<<d1->budget()<<std::endl;

    std::cout<<"Calling calculateTax inherited from Manager class :"<<"\n";
    d1->Manager::CalculateTax();
    std::cout<<"\n";

    std::cout<<"Calling calculateTax inherited from Executive class :"<<"\n";
    d1->Executive::CalculateTax();
    std::cout<<"\n";

    std::cout<<"Director's implementation of calcuteTax :"<<"\n";
    d1->CalculateTax();
    std::cout<<"\n";

    delete d1;

}
