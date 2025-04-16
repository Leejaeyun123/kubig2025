#include "complex.h"

std::ostream& operator<<(std::ostream& out, const Complex& rhs)
{
    return out << "(" << rhs.re_ << ", " << rhs.im_ << "i)";
}

Complex::Complex(double re, double im)
{
    re_ = re;
    im_ = im;
}

Complex& Complex::operator+=(const Complex& rhs)
{
    re_ += rhs.re_;
    im_ += rhs.im_;

    return *this;
}

bool Complex::operator==(const Complex& rhs)
{
    return re_ == rhs.re_ && im_ == rhs.im_;
}
const Complex Complex::operator+(const Complex& rhs)
{
    Complex result(re_ + rhs.re_, im_ + rhs.im_);

    return result;
}
