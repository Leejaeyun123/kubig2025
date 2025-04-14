#include "list.h"
#include <iostream>

int main()
{
    List list1;
    list1.insertFirstNode(4);
    list1.insertFirstNode(3);
    list1.insertFirstNode(1);
    list1.insertNode(1, 2);

    list1.deleteNode(3);

    std::cout << list1 << std::endl;


    return 0;
}