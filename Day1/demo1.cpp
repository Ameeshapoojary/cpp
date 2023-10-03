#include<iostream>
int main(){
    int n1=10;
    int *ptr=&n1;
    int **sptr=&ptr;
    //data inside n1
    std::cout<<"Data inside n1:"<<n1<<"\n";
    //data inside sptr
     std::cout<<"Data inside sptr:"<<sptr<<"\n";
     //jump ptr one time
     std::cout<<"jump ptr one time:"<<*ptr<<"\n";
     //jump sptr 2 time
      std::cout<<"jump sptr one time:"<<**sptr<<"\n";
      //Address of n1
      std::cout<<"Address of n1:"<<&n1<<"\n";
      //Address of ptr
      std::cout<<"Address of ptr:"<<&ptr<<"\n"; 
      //Address of sptr
      std::cout<<"Address of sptr:"<<&sptr<<"\n";
      

}