#include <stdio.h>
void main()
{
    int i, n, odd = 0, even = 0;

    printf("Enter the number you want");
    scanf("%i", &n);
    int array[n];

    for (i = 0; i < n; i++)
    {
        scanf("%i", &array[i]);
        if (array[i] % 2 == 0)
        {

            even += 1;
            printf("Even numbers are %i \n", even);

        }
        else
        {
            odd += 1;
            printf("Odd numbers are %i \n", odd);
        }
    }
    printf("Even numbers are %i \n", even);
    printf("Odd numbers are %i \n", odd);


    
}