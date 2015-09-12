#include <stdio.h>

void func(int a[][3]);//only first dimension may be left empty
void func2(int (*a)[2][2]);

int main()
{
    int b[2][3] = {{2,4,6}, {5,7,8}};//b returns int * [3]
    int c[3][2][2];
    int (*p)[3] = b;
    int (*p1)[2][2] = c;

    c[0][1][1] = 100;

    printf("b = %p\n", b);
    printf("*b = %p\n", *b);
    printf("b[0] = %p\n", b[0]);
    printf("&b[0][0] = %p\n", &b[0][0]);

    printf("\n");

    printf("c = %p\n", c);
    printf("*c = %p\n", *c);
    printf("c[0] = %p\n", c[0]);
    printf("&c[0][0] = %p\n", &c[0][0]);

    //c[i][j][k] = *(c[i][j] + k)
    //           = *(*(c[i] + j) + k)
    //           = *(*(*(c + i) + j) + k)

    printf("*(c[0][1] + 1) = %d\n", *(c[0][1] + 1));//c[0][1][1]
    printf("c[0][1][1] = %d\n", c[0][1][1]);

    printf("*(c[1] + 1) = %p\n", *(c[1] + 1));//c[1][1] or &c[1][1][0]
    printf("c[1][1] = %p\n", c[1][1]);
    printf("&c[1][1][0] = %p\n", &c[1][1][0]);

    func(b);
    func2(c);

    return 0;
}

void func(int a[][3])
{

}

void func2(int (*a)[2][2])
{

}
