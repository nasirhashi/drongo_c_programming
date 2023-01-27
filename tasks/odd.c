#include <stdio.h>
int main()
{
    int l[] = {1, 2, 3, 4, 7, 8};
    int odd = 0, even = 0;
    for (int m = 0; m < 6; m++)
    {
        if (l[m] % 2 == 0)
        {
            printf("Even \n");
            even = even + 1;
            printf("%i \n", even);
        }
        else
        {
            printf("Odd \n");
            odd = odd + 1;
            printf("%i \n", odd);
        }
    }
    printf("%i \n", even);
    printf("%i \n", odd);
}