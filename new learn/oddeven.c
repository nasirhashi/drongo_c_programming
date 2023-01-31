#include <stdio.h>

/*

write c program showing how many are odd and even 
 */

void main()
{
    int i, n, odd = 0, even = 0;

    printf("How many elements do you want to enter \n");
    scanf("%i", &n);
    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter element %i \n", i + 1);
        scanf("%i", &array[i]);
    }

    printf("Checking for Odd and Even numbers \n");
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {

            even += 1;
            // printf("Even numbers are %i \n", even);
        }
        else
        {
            odd += 1;
            // printf("Odd numbers are %i \n", odd);
        }
    }
    printf("Even numbers are %i \n", even);
    printf("Odd numbers are %i \n", odd);
}