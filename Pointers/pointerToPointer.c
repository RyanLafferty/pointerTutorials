#include <stdio.h>

int main()
{
    int x = 5;
    int * p;
    int ** pp;
    int *** ppp;

    p = &x;
    pp = &p;
    ppp = &pp;
    //ppp -> pp -> p -> x

    printf("Value of x = %d", x);
    printf("p: Address = %p, value = %d\n", p, *p);
    printf("pp: Address = %p, value = %p, value pointed at by value = %d\n", pp, *pp, **pp);
    printf("pp: Address = %p, value = %p, value pointed at by value = %p, value being pointed at by value being pointed at by value = %d\n", ppp, *ppp, **ppp, ***ppp);



    return 0;
}
