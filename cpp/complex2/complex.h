#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
public:
	Complex();						// default constructor
	Complex(double re);				// convert. constructor
	Complex(double re, double im);
	~Complex();

// void operator=(Complex c);
//void operator=(const Complex *pc);	
void operator=(const Complex& rc);

double real();
double imag();

void real(double re);
void imag(double im);
	
private:
	double re;
	double im;
};

#endif