#include <stdio.h>
#include <stdlib.h>

int * add(int * a, int * b);

int main()
{
    int x;
    int y;
    int * z;

    x = 2;
    y = 4;

    z = add(&x,&y);
    printf("Sum = %d\n", *z);

    free(z);
    return 0;
}

int * add(int * a, int * b)
{
    int * c = malloc(sizeof(int) * 1);
    if(c == NULL)
    {
        printf("Error when allocating memory!!!\n");
        return 0;
    }

    *c = (*a) + (*b);
    return c;
}
