#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: zero
 *
 */
int main(void)
{
unsigned long fibo1 = 0;
unsigned long fibo2 = 1;
unsigned long sum;
float total_sum;

while (1)
{
sum = fibo1 + fibo2;

if s(sum > 4000000)
break;

if ((sum % 2) == 0)
total_sum += sum;

fibo1 = fibo2;
fibo2 = sum;
}
printf("%.0f\n", total_sum);

return (0);
}
