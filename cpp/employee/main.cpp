#include <iostream>
#include "employee.h"

void printEmployee(Employee *p)
{
    std::cout << "id: " << p->getId() << "name : " << p->getName() << " manager : ";
    std::cout << ((p->isManager() ) ? "" p->getManager()->getName()) << std::endl;
}
int main()
{
    //Employee e6 = e1; // ???
    //e1 = e2;          // ???

    //Employee employees[10];     // X default constructor is called.
    Employee* pEmployees[10];
    pEmployees[0] = new Employee(1, "Park Jung Seok", NULL);
    pEmployees[1] = new Employee(2, "Sung Young Ho", pEmployees[0]);
    pEmployees[2] = new Employee(3, "Choi Su Gil", pEmployees[0]);
    pEmployees[3] = new Employee(4, "Park Jung Seok", pEmployees[0]);
    pEmployees[4] = new Employee(5, "Min Byung Hun", pEmployees[3]);

    for ( int i = 0; i < 5; i++)
    {
        printEmployee(pEmployees[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        delete pEmployees[i];
    }
    
    
    printEmployee(pEmployees[i]);
    
    return 0;
}