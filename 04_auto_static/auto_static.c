#include <stdio.h>

void fun();

int main()
{
    int loop;
    for (loop = 0; loop < 5; loop++)
    {
        fun();
    }
    return 0;
}

void fun()
{
    auto int a = 0;
    static int b = 0;
    printf("a = %i, b = %i \n", a, b);
    ++a;
    b++;
}