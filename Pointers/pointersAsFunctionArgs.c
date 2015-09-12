#include <stdio.h>

void increment(int * p);

int main()
{
    int a;

    a = 10;

    printf("a = %d\n", a);
    increment(&a);
    printf("a = %d\n", a);

    return 0;
}

//pointers as function arguments is known as call by reference
//stack is where local veriables go
//text, static/global and stack memory is fixed at program start
//they are decided when the program starts.
//The heap is execution memory, allocated during program execution


void increment(int * p)
{
    *p = *p + 1;
}
