#include <stdio.h>

// display all elements of an array
void main()
{
    int marks[] = {45, 47, 87, 21, 34, 49, 15};
    // printf("value %i \n", marks[0]);
    // printf("value %i \n", marks[1]);
    // printf("value %i \n", marks[2]);
    // printf("value %i \n", marks[3]);
    // printf("value %i \n", marks[4]);
    // printf("value %i \n", marks[5]);
    // printf("value %i \n", marks[6]);
    
    for (int x = 0; x < 7; x++)
    {
        printf("value %i \n", marks[x]);
    }
}