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
double Complex::imag()
{
	return this->im;
}
void Complex::real(double re)
{
	this->re;
}
bool Complex::operator==(const Complex& rc)
{
//	if (this->re == rc.re && this->im == rc.im)
//	{
//		return true;
//	} else{
//		return false;
//	}
return (this->re == rc.re && this->im == rc.im);
}
double Complex::real()
{
	return this->re;
}
