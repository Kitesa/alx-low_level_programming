#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 *
 * @n: input to the function
 *
 * Return: zero
 *
 */
void print_to_98(int n)
{
int number;

if (n > 98)
{
for (number = n; number > 97; number--)
{
_putchar(number);
if (number != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (number = n; number < 99; number++)
{
printf(number);
if (number != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
