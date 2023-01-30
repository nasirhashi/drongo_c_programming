#include <stdio.h>
void main()
{
    int year = 365;
    int week = 7;
    int num;

    printf("Enter a number\n");
    scanf("%i", &num);
    int years, weeks, days;
    years = num / year;
    weeks = (num % year) / week;
    days = (num % year) % week;
    printf("number of years  %i\n", years);
    printf("number of weeks   %i\n", weeks);
    printf("number of days   %i\n", days);

    printf("%i days has %i years %i weeks and %i days \n",num, years, weeks, days);

}