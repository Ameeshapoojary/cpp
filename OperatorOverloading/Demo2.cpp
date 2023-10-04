#include<iostream>
class Complex
{
private:
    float _real;
    float _imag;  

public:
    Complex(float real,float imag)
    :_real(real),_imag(imag) {}
    ~Complex() {
        std::cout<<"Object destroyed\n";

    }
    //Overlading a operator where the type of 2 operand is same.
    Complex operator+(Complex n2){
        float r=this-> _real + n2._real;
        float i=this-> _imag + n2._imag;

        Complex temp(r,i);
        return temp;
    }
};