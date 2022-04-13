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
if (c % 10 < 0)
{
_putchar((c % 10)*(-1));
}
else
{
_putchar(c + '0');
}
return (c);
}

