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
    //Overloding a operator where the type of 2 operand is same.
    Complex operator+(Complex n2){
        float r=this-> _real + n2._real;
        float i=this-> _imag + n2._imag;

        Complex temp(r,i);
        return temp;
    }
friend std::ostream &operator<<(std::ostream &os, const Complex &rhs);
    
};
 std::ostream &operator<<(std::ostream &os, const Complex &rhs) {
        os << "_real: " << rhs._real
           << " _imag: " << rhs._imag;
        return os;
    }//friend is a function is not member function of class
    //Friendly to a class but not member of class
    //can acces private member but not legal(but its not member of the 
    //class to access the private member)