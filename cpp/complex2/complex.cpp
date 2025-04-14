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



void Complex::operator=(const Complex& rc)
{
	this->re = rc.re;
	this->im = rc.im;
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
int Complex::operator==(const Complex& rc)
{
	if (this->re == rc.re && this->im == rc.im)
	{
		return 1;
	} else{
		return 0;
	}
	
}
