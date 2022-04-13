#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all nat numbers from n to 98.
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
printf("%d", number);
if (number != 98)
{
printf(", ");
}
}
}
else
{
for (number = n; number < 99; number++)
{
printf("%d", number);
if (number != 98)
{
printf(", ");
}
}
}
printf("\n");
}
