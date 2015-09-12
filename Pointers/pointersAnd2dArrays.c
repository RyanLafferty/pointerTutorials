#include <stdio.h>



int main()
{
    int a[5];
    int b[2][3]; //2x3
    int * p;
    int ** p2;
    int (*p3)[3] = b;

    b[0][1] = 0;

    printf("b: address = %p\n&b[0]: address = %p\n", b, &b[0]); //b and &b[0] return base address
    printf("*b: address = %p\n&b[0]: address = %p\n&b[0][0]: address = %p\n", *b, b[0], &b[0][0]);//all return the bass address
    printf("b+1: address = %p\n", (b+1));//returns the address of the second integer array
    //b+1 == &b[1] == b[1][0]

    printf("*(b+1): address = %p\n", *(b+1));
    printf("b[1]: address = %p\n", b[1]);
    printf("b[1]: address = %p\n", &b[1][0]);
    //*(b+1) == b[1] == &b[1][0]

    printf("*(b+1)+2: address = %p\n", (*(b+1)+2));//b[1][2]
    printf("&b[1][2]: address = %p\n", &b[1][2]);
    //*(b+1)+2 == &b[1][2]

    printf("*(*b+1): address = %d\n", *(*b+1));
    //*b gives us an integer array of size 3
    //+ 1 increments the pointer of the array to the second slot
    //* gives us the integer located in slot [0][1]
    //expand from the inside out when working with pointers
    //b[i][j] = *(b[i] + j)
    //        = *(*(b + i) + j)

    return 0;
}

//*(a+i) is the same as a[i]
//(a+i) is the same as &a[i]
