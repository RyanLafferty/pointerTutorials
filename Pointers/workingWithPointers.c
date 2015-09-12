#include <stdio.h>

int main()
{
    int a;
    int b;
    int * p;

    a = 3;
    b = 5;
    p = &a;

    printf("a = %d\n", a);//print a
    printf("b = %d\n", b);//print a

    *p = b;//sets the value of a to b
    //this is because the contents being pointed at (cell a) are being changed to the value of b.

    printf("new value of a = %d\n", a);//print a

    //pointer arithmetic
    printf("Address that p is pointing at = %p\n", p);//print address p is pointing at
    printf("Address that p is pointing at + 1= %p\n", (p+1));//print address p is pointing at + 1
    //p is incremented by one unit
    //int = 4 bytes
    //therefore the memory address will increase by 4
    printf("Size of int = %d bytes\n", (int)sizeof(int));

    return 0;
}
