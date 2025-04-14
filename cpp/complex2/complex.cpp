#include "complex.h"

Complex::Complex()
{
	this->re = 0.0;
	this->im = 0.0;
}

Complex::Complex(double re)
{
	this->re = re;
	this->im = 1.0;
}

Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex::~Complex()
{

}

void Complex::operator=(Complex c)
{
	this->re = c.re;
	this->im = c.im;
}
double Complex::real()
{
	return this->re;
}
double Complex::imag()
{
	return this->im;
}
void Complex::real(double re)
{
	this->re;
}
