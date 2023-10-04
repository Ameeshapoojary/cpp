#include<iostream>
void Demo(){
    int n1=10;
    int n2=20;
    //const is applied on 'int' not on 'int*'

    //ptr  is a constant pointer to any integer
    //  int *const ptr=&n1;
    const int * const  ptr=&n1;

    //since pointer itself is constant,Its 'constant cannot be changed,so address inside ptr cannot be changed.
    //since int part is constant,I cannot use pointer to change n1's value
    //ptr=&n2;;//not alllowed,bcz ptr itself is constant
    //*ptr=100;
    //so address inside ptr can be changed
}