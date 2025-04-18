#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
//class Complex;
class Complex{
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);

private:
    double re;
    double im;

public:
    Complex(double re = 0.0, double im = 0.0); // default argument
    Complex(const Complex& rhs);               // copy constructor
    ~Complex();

    Complex& operator=(const Complex& rhs);

    bool operator==(const Complex& rhs);

    const Complex operator+(const Complex& rhs);
    const Complex operator-(const Complex& rhs);
    //*,/

    // get, set ??? X
};

#endif