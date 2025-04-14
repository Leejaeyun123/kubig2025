#include <cassert>
#include "rational.h"

Rational::Rational(int num, int den)
{
    assert(den != 0);
    
    this->num = num;
    this->den = den;
}

Rational::Rational(int num)
{
    this->num = num;
    this->den = 1;
}

Rational::~Rational()
{
    
    
}
Rational::den()
{
    
    
}
void Rational::getNum()
{
    this->num = num;
    
}
void Rational::getDen()
{
    assert(this->den );
    
}
