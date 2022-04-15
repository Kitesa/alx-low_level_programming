#include "main.h"
/**
 * more_numbers - reurn more numbers
 *
 * Return: always zero
 *
 */
void more_numbers(void)
{
int counter = 0;
int number = 0;

for (counter = 0; counter <= 9; counter++)
{
for (number = 0; number <= 14; number++)
{
_putchar(number + '0');
}
_putchar('\n');
}
_putchar('\n');
}
