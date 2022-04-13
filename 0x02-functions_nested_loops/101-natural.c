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

while (counter < 1024)
{
if(counter % 3 == 0 || counter % 5 == 0)
{
sum += counter;
counter++;
}
}
printf("%d",sum);
}
