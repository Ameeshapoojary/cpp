#include<iostream>
void Demo(){
    int n1=10;
    int n2=20;
    //const is applied on 'int' not on 'int*'

    //ptr  is a pointer to a CONSTANT integer
    const int* ptr=&n1;

    //since int part is constant,I cannot use pointer to change n1's value
    //*ptr=100;//not alllowed
    ptr=&n2;
    //so address inside ptr can be changed
}