#include <stdio.h>

int recursive(int m);
int noma(int v);
int decrement(int v);

void main()
{
    int n, sum;
    printf("Enter a number \n");

    scanf("%i", &n);
    sum = recursive(n);
    printf("the sum is %i \n", sum);

    printf("Calling noma \n");
    noma(n);
    decrement(n);
}
int recursive(int m)
{
    if (m != 0)
    {
        return m + recursive(m - 1);
    }
    else
    {
        return m;
    }
}
int noma(int v)
{
    int i, sum = 0;
    for (i = 0; i <= v; i++)
    {
        sum = sum + i;
    }
    printf("Sum is %i \n", sum);
}


int decrement(int v)
{
    int i, sum = 0;
    for (i = v; i > 0; i--)
    {
        sum = sum + i;
    }
    printf("Sum is %i \n", sum);
}