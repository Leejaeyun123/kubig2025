#include "complex.h"

Complex::Complex(double re, double im)
{
    this->re = re;
    this->im = im;
}

Complex::Complex(const Complex &rhs)
{
    this->re = rhs.re;
    this->im = rhs.im;
}

Complex::~Complex()
{
}
Complex& Complex::operator=(const Complex &rhs)
{
    this->re = rhs.re;
    this->im = rhs.im;
    
    return *this;
}

bool Complex::operator==(const Complex &rhs)
{
    return this->re == rhs.re && this->im == rhs.im;
}