#include <stdio.h>
#include <string.h>

void print(char * C);

int main()
{
    char s[5];//this is a string
    char literal[20] = "Ryan is awesome.";//this is a string literal assigned to a character array
    char ss[5] = {'T', 'E', 'S', 'T', '\0'};//this is also a string
    int length;

    s[0] = 'R';
    s[1] = 'y';
    s[2] = 'a';
    s[3] = 'n';

    printf("Without null terminator: %s\n", s);
    s[4] = '\0';
    printf("With null terminator: %s\n", s);

    //strlen returns the size of the string not including the null terminator.
    length = strlen(s);
    printf("Size of s = %d\n", length);

    length = strlen(literal);
    printf("literal = \"%s\", size = %d\n", literal, length);

    length = strlen(ss);
    printf("ss = \"%s\", size = %d\n", ss, length);

    //arrays and pointers are different types that are used in a similar manner
    char c1[6] = "Hello";
    char * c2;
    c2 = c1;//sets c2 to the base address of c1 just like with arrays
    printf("c2 = %c\n", *c2);
    //c2[i] is *(c2 + i)
    //c1[i] or *(c1 + i)
    printf("c2[1] = %c\n", c2[1]);
    printf("c2[1] = %c\n", *(c2+1));
    printf("c2 = %s\n", c2);//must pass strings like this
    c2++;
    printf("c2 = %c\n", *c2);
    //cant do c1 = c2 or c1 = c1 + 1; these statements are incorrect

    //arrays are always passed by reference
    char C[20] = "Hello";

    print(C);

    return 0;
}

//string = group of characters, ex. "john" "ryan"
//size of string always 1 greater than string length to account for
//the null terminator (''\0')
//a string is also known as a character array

void print(char * C)
{
    int i = 0;

    while(C[i] != '\0')//*(C+i) is same
    {
        printf("%c", C[i]);
        i++;
    }

    printf("\n");

    i = 0;

    while(*(C+i) != '\0')
    {
        printf("%c", C[i]);
        i++;
    }

    printf("\n");

    while(*C != '\0')
    {
        printf("%c", *C);
        C++;//increment pointer by 1 value
    }

    printf("\n");
}
