
#include <stdio.h>
int main()
{

  int n, i, sum = 0;
  printf("How many elements do you want to enter: ");
  scanf("%i", &n);
  int marks[n];
  double average;

  for (i = 0; i < n; ++i)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &marks[i]);

    // adding integers entered by the user to the sum variable
    sum += marks[i];
  }

  // explicitly convert sum to double
  // then calculate average
  average = (double)sum / n;

  printf("Sum = %i \n", sum);
  printf("Average = %.2lf \n", average);

  return 0;
}