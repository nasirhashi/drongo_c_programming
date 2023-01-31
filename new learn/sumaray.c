#include <stdio.h>

    /*
    write a program to calculate the sum of array of n numbers
    */

void manin()
{
    int i, n, sum = 0;
    int marks[6];
    
    printf("Enter a number");
    scanf("%i", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%i", &marks[i]);
        sum += marks[i];
    }
    printf("the sum of all array is %i ", sum);


}