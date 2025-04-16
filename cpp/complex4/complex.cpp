#include "complex.h"

std::ostream& operator<<(std::ostream& out, const Complex& rhs)
{
    return out << "(" << rhs.re_ << ", " << rhs.im_ << "i)";
}

Complex::Complex(double re, double im)
{
    this->re_ = re;
    this->im_ = im;
}

bool Complex::operator==(const Complex& rhs)
{
    return this->re_ == rhs.re_ && this->im_ == rhs.im_;
}
const Complex Complex::operator+(const Complex& rhs)
{
    Complex result(this->re_ + rhs.re_, this->im_ + rhs.im_);

    return result;
}
