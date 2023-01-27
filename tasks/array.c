#include <stdio.h>
int main()
{
    int nasir[5] = {71, 82, 93, 94, 95};
    int ans = 0;
    for (int j = 0; j < 5; j++)
    {
        ans = ans + nasir[j];
        // printf("The value at index %i is %i \n", j, nasir[j]);
        // printf("The sum %i \n", ans);
    }
    printf("The final answer is %i \n", ans);
}
