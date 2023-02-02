#include <stdio.h>

// display all elements of an array
void main()
{
    printf("How many elements do you want \n");
    int size;
    scanf("%i",&size);
    int marks[size];
   
    for (int x = 0; x < size; x++)
    {
        printf("Enter a number \n");
        scanf("%i",&marks[x]);
    }

    for (int x = 0; x < size; x++)
    {
        printf("value %i \n", marks[x]);
    }
}