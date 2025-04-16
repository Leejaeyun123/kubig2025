#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex {
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);

private:
    double re_;
    double im_;

public:
    Complex(double re = 0.0, double im = 0.0);
    //Complex(const Complex& ) { /* memberwise copy */}
    //~Complex() {}

    //Complex& operator=(const Complex& ) { /* memberwise copy */ return *this; }
    Complex& operator+=(const Complex& rhs);
    // +=, -=, *=, /= 0
    // %=, &=, |=,  ^= X

    bool operator==(const Complex& rhs);
    bool operator!=(const Complex& rhs);
    // >, <, >=, <=

    const Complex operator+(const Complex& rhs);
    // -, *, /
    // % X

    // ++, -- X

    // &, |, -, ^ X

    // type casting X

    //Complex *operator&() { return this; }
    //const Complex *operator&() const { return this; }
};

#endif