#include <stdio.h>
#include <stdlib.h>

/**
 * sum_of_multiple - calculate sum of multiples
 *
 * Return: zero after completion
 *
 */
int main()
{
int sum = 0;
int counter = 0;

for (counter = 0; counter < 1024; counter++)
{
if(counter % 3 == 0 || counter % 5 == 0)
sum += counter;
}
printf("%d",sum);
}
