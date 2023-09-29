#include<iostream>
/*
int &ptr//left side of &has a data type (reference)
&ptr;//no type to the left of &(pointer)
*/
// //call by value:copy passed parameter into parameter
// void magic(int data){
//     std::cout <<"Address of data:"<< &data <<"\n";
//     std::cout <<"content in data:"<< data <<"\n";
    
//     data=777;
//     std::cout<<"After modification,data is:"<<data<<"\n";
// }
void magic(int& data){
    std::cout <<"Address of data:"<< &data <<"\n";
    std::cout <<"content in data:"<< data <<"\n";
    
    data=777;
    std::cout<<"After modification,data is:"<<data<<"\n";
}
int main(){
    int n1=10;
     std::cout <<"Address of n1 in main:"<< &n1 <<"\n";
    // magic(10);//10 will be copied into scope of magic
    magic(n1);//n1 will be copied into scope of magic

    std::cout<<"Value in main after calling magic:"<<n1<<"\n";
        
    }