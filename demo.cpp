#include<iostream>
int main(){
    char arr[]{"hello world!"};
    int a[3]={1,2,3};
    std::string ab="hello";
    std::cout<<arr<<'\n'<<a<<std::endl;
    std::cout<<&arr<<'\n'<<a<<std::endl;
     std::cout<<a[1]<<'\n'<<a<<std::endl;


}