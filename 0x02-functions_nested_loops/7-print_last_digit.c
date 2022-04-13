#include "main.h"
/**
 * print_last_digit - print the last digit
 *
 * @c: input for the function
 *
 * Return: the last digit of c
 *
 */
int print_last_digit(int c)
{
int n = c % 10; 
if (c < 0)
{
n = n * -1;
}
else
{
_putchar(n + '0'); 
}
return (n);
}

