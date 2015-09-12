#include <stdio.h>

int main()
{
    int a[5];
    int * p;

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;

    p = &a[0];
    printf("Value of a[0] = %d\n", a[0]);
    printf("Value of a[1] = %d\n", a[1]);
    printf("Value of a[2] = %d\n", a[2]);
    printf("Value of a[3] = %d\n", a[3]);
    printf("Value of a[4] = %d\n", a[4]);

    printf("p: Address = %p, value = %d\n", p, *p);
    printf("p: Address + 1 = %p, value = %d\n", (p+1), *(p+1));
    printf("p: Address + 2 = %p, value = %d\n", (p+2), *(p+2));
    printf("p: Address + 3 = %p, value = %d\n", (p+3), *(p+3));
    printf("p: Address + 4 = %p, value = %d\n\n", (p+4), *(p+4));

    p = (a + 1);
    printf("p: Address = %p, value = %d\n", p, *p);

    p = a;//gives us the base address
    printf("p: Address = %p, value = %d\n", p, *p);

    p++;//increment pointer by 1 value
    printf("p: Address = %p, value = %d\n", p, *p);

    return 0;
}

//element at index i
//address - &a[i] or (a + i)
//value - a[i] or *(a + i)
