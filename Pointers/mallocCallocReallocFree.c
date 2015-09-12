#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * p = (int *) malloc(sizeof(int) * 3);//the type cast is not needed for the gcc compiler
    if(p == NULL)
    {
        printf("Failure: Could not allocate memory!!!!\n");
        return 1;
    }
    int * p1 = (int *) calloc(3, sizeof(int));
    if(p1 == NULL)
    {
        printf("Failure: Could not allocate memory!!!!\n");
        return 1;
    }
    int * p2;
    int n;

    *p = 2;
    *(p + 1) = 4;
    p[2] = 6;

    printf("Enter the size of an array to create: ");
    scanf("%d", &n);

    p2 = calloc(n, sizeof(int));
    if(p2 == NULL)
    {
        printf("Failure: Could not allocate memory!!!!\n");
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        p2[i] = p2[i] + i;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", p2[i]);
    }

    printf("\n");
    n++;
    realloc(p2, sizeof(int)*n);
    if(p2 == NULL)
    {
        printf("Failure: Could not allocate memory!!!!\n");
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        p2[i] = p2[i] * 2;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", p2[i]);
    }


    free(p);
    free(p1);
    free(p2);
    return 0;
}

//allocate//
//malloc - void * malloc(size_t size)
//size in bytes, must be positive
//returns null on error, returns a void pointer on success
//note: void pointers cannot be dereferenced, must be typecasted
//calloc - void * calloc(size_t num, size_t size)
//takes the number of elements and the size of the data type in bytes
//calloc initializes the memory to 0
//returns null on failure, returns a void pointer on success
//realloc - void * realloc(void * ptr, size_t size)
//takes a void pointer and a size of the new block in bytes
//can return null on failure, and a void pointer to the new block on success

//deallocate//
//free
