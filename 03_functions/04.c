#include <stdio.h>

#define max 12

void another();

int a = 9;

void main()
{
    int a = 14;
    another();
}

void another()
{

    printf("%i \n", a);
    for(int x = 0; x < 5; x++){
        printf("%i \n", x);
    }
}