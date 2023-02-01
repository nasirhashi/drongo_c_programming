#include <stdio.h>
void main()
{
    int k;
    printf("How many values do you want \n");
    scanf("%i",&k);
    int w[k];
    
    for (int i = 1; i <= k; i++)
    {
        printf("Enter a number \n");
        scanf("%i", &w[i]);
        // printf("%i \n", i);
    }

    printf("Display the values \n");
    for (int i = 1; i <= k; i++)
    {
        printf("%i \n", w[i]);
    }
}