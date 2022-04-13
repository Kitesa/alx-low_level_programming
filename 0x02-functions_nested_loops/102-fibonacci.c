#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Zero
 *
 */
int main(void)
{
int counter = 0;
unsigned long fibo1 = 0;
unsigned long fibo2 = 1;
unsigned long sum;

for (counter = 0; counter < 50; counter++)
{
sum = fibo1 + fibo2;
printf("%lu", sum);

fibo1 = fibo2;
fibo2 = sum;

if (counter == 49)
printf("\n");
else
printf(", ");

}
return (0);
}
