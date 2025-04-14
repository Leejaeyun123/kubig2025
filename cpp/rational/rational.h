#ifndef RATIONAL_H
#define RATIONAL_H

class Rational{
private:
    int num;
    int den;

public:
    Rational(int num, int den);
    Rational(int num);
    Rational();
    ~Rational();

    int getNum();
    int getDen();
    

    void setNum(int num);
    void setDen(int den);

};

#endif