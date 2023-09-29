#include<iostream>
int main(){
    int arr[5]={1,2,3,4,5};
    std::cout
         <<"content of arr:(address of first loc)"
         <<arr
         <<"\n";

    std::cout
         <<"Address of first loc"
         <<(arr+0) //0x100H+0x4=0x100H
         <<"\n";

    std::cout
         <<"Address of second loc"
         <<(arr+1) //0x100H+1x4=0x104H
         <<"\n";

    std::cout
         <<"Address of third loc"
         <<(arr+2) //0x100H+2x4=0x100H
         <<"\n";

}