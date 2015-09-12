#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;//goes on stack
    int * p;

    //the type cast is not needed for the gcc compiler
    p = (int *) malloc(sizeof(int) * 1);//goes in heap
    *p = 10;

    printf("p = %d\n", *p);
    free(p);

    p = (int *) malloc(sizeof(int) * 20);
    p[0] = 1;
    p[1] = 2;
    printf("p[0] = %d\n", p[0]);
    printf("p[1] = %d\n", p[1]);
    free(p);

    return 0;
}

//malloc returns null on error, check for this when handling errors
