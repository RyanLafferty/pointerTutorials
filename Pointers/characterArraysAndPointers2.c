#include <stdio.h>
#include <string.h>

//const = constant = cannot be changed
void print(char * c);

int main()
{
    char c[20] = "Hello";//character array
    //String literal gets stored as a constant during compile time
    //cannot be modified since it is constant.
    char * C = "Hello World";


    print(c);

    return 0;
}



void print(char * c)
{
    while(*c != '\0')
    {
        printf("%c", *c);
        c++;
    }

    printf("\n");
}
