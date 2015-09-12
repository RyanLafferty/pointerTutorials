#include <stdio.h>

int sumOfElements(int a[], int size);//int * a and int a[] are the same
//because arrays are passed by reference
//therefore modified values will affect the array in main
void doubleElements(int * a, int size);

int main()
{
    int a[] = {1,2,3,4,5};
    int total;
    int size;
    int i;

    i = 0;
    size = (sizeof(a) / sizeof(a[0]));

    printf("Main - Size of a = %d, size of a[0] = %d\n", (int)sizeof(a), (int)sizeof(a[0]));

    total = sumOfElements(a, size);//a can be passed using &a[0] as well

    printf("Sum = %d\n", total);

    for(i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i , a[i]);
    }

    printf("\n");
    doubleElements(a, size);

    for(i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i , a[i]);
    }

    return 0;
}

//when a compiler sees an array as a function argument,
//instead of copying the array into another memory location;
//the compiler will create a pointer to the data type of the array
//and copies the address of the first element of the array.
//Therefore the compiler converts int a[] to int * a.
//Arrays are always passed by reference (NOT BY VALUE)!!!!

int sumOfElements(int a[], int size)
{
    int i;
    int sum;

    i = 0;
    sum = 0;

    //this will generate a warning, its ok because we are
    //proving that arrays are passed by reference rather than
    //passed by value
    printf("SOE - Size of a = %d, size of a[0] = %d\n", (int)sizeof(a), (int)sizeof(a[0]));

    for(i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}

void doubleElements(int * a, int size)
{
    int i;

    i = 0;

    for(i = 0; i < size; i++)
    {
        a[i] = a[i] * 2;
    }
}
