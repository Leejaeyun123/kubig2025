#include <stdio.h>

int main(void)
{
    int income = 456;
    double tax;
    double tax_rate = 0.12;
    tax_rate = 0.15;
    tax_rate = 0.16;
    tax_rate = 0.17;
    tax_rate = 0.18;
    tax_rate = 0.19;
   
    tax = income * tax_rate;
    printf("세금은 : %.1lf입니다.\n", tax);

    return 0;
}


