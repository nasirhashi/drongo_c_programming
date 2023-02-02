#include<stdio.h>

void main()
{
    int x = 2;
printf("Before the switch \n");

    printf("Enter a number between 1 and 3 \n");
    scanf("%i",&x);

    switch (x)
    {
    case 1:
        printf("you entered 1 \n");
        break;
    
    case 2:
        printf("you entered 2 \n");
        break;

    case 3:
        printf("you entered 3 \n");
        break;

    default:
    printf("Please enter correct input \n");
        break;
    }

    printf("After the switch \n");

}
// switch case statement