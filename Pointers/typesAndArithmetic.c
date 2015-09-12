#include <stdio.h>

int main()
{
    int a = 1025;
    int * p;
    char *p0;

    p = &a;
    printf("Size of int = %d bytes\n", (int)sizeof(int));
    printf("p: Address = %p, value = %d\n", p, *p);

    p0 = (char *) p; //example of type casting
    printf("Size of char = %d bytes\n", (int)sizeof(char));
    printf("p0: Address = %p, value = %d\n", p0, *p0);
    printf("p0: Address + 1 = %p, value = %d\n", (p0+1), *(p0+1));
    printf("p0: Address + 2 = %p, value = %d\n", (p0+2), *(p0+2));
    printf("p0: Address + 3 = %p, value = %d\n", (p0+3), *(p0+3));

    //1025 in binary =
    //00000000 00000000 00000100 00000001
    //0        0        4        1

    //void pointer = generic pointer
    void * p1;
    p1 = p;//no typecast required
    printf("p1: Address = %p\n", p1);
    printf("p1: Address + 1 = %p\n", (p1+1));
    printf("p1: Address + 2 = %p\n", (p1+2));
    printf("p1: Address + 3 = %p\n", (p1+3));

    return 0;
}

//pointers are heavily typed
//therefore you need int * to point at int

//pointers are strongly typed in order to dereference in order
//to access and modify the values at a given address and since
//data types are different sizes, that is why pointers are
//strongly typed.
