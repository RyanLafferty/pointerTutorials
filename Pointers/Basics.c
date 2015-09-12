#include <stdio.h>

int main()
{
    int a; //integer
    int * p; //pointer to an integer

    p = &a; //pointer now points at the memory location of a
    a = 3;

    printf("a = %d\n", a);//print a
    printf("Address of a = %p\n", &a);//print memory address of a
    printf("Address that p is pointing at = %p\n", p);//print address p is pointing at
    printf("Address of p = %p\n", &p);//print memory address of p
    printf("Value that p is pointing at = %d\n", *p);//print the contents of the address that p is pointing at.

    *p = 10;//changes the value of a to 10 because dereferencing changes the contents of the memory cell that p is pointing at.

    printf("The new value of a = %d\n", a);
    
    return 0;
}

//& = get address of
//* = dereference
//pointers store the address of other variables
//therfore pointers point at memory addresses
