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
if (n < 98)
{
int number = n;

for (number = n; number < 98; number++)
{
_putchar(number);
}
else
{
int number = n;

for (number = n; number = 98; number--)
{
_putchar(number);
}
}
}
}
