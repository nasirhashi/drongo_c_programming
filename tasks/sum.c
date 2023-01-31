#include <stdio.h>



void main()
{
    int x = 29423;

    int sum;
    int value;

    // for (int i = 0; x != 0; i++)
    // {
    //     value = x % 10;
    //     sum += value;
    //     x = x / 10;
    //     printf("%i \n", sum);
    // }
    // printf("%i \n", sum);

    while (x != 0)
    {
            value = x % 10;
            sum += value;
            x = x/10;
            printf("%i \n", sum);
    }
}