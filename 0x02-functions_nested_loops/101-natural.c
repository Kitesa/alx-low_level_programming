#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate sum of multiples
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
if((counter % 3 == 0) || (counter % 5 == 0))
sum += counter;
}
printf("%d\n", sum);
return (0);
}
