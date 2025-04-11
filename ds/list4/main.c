#include "list.h"
#include <stdio.h>

void printInt(const void *pData)
{
    printf("%d", *(int *)pData);
}

void printDouble(const void *pData)
{
    printf("%f", *(double *)pData);
}

int main(void)
{
    List list1, list2;
    initList(&list1, sizeof(int));
    initList(&list2, sizeof(double));

    int i = 4;
    i = 3;
    insertFirstNode(&list1, &i); // [4]
    i = 1;
    insertFirstNode(&list1, &i); // [3, 4]
    int j = 1;
    i = 2;
    insertFirstNode(&list1, &i);
    i = 3;
    insertNode(&list1, &j, &i);

    deleteNode(&list1, &i);
    printList(&list1, printInt);

    double d = 4.4;
    d = 3.3;
    insertFirstNode(&list2, &d); // [4]
    d = 1.1;
    insertFirstNode(&list2, &d); // [3, 4]
    double f = 1.1;
    d = 2.2;
    insertFirstNode(&list2, &d);
    d = 3.3;
    insertNode(&list2, &f, &d);

    deleteNode(&list2, &d);
    printList(&list2, printDouble);

    cleanupList(&list1);
    cleanupList(&list2);
    return 0;
}