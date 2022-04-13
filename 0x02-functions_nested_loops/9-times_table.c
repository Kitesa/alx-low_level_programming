#include "main.h"
/**
 * times_table - time table\
 *
 * Return: void
 *
 */
void times_table(void)
{
int counter;
int column;

for (counter = 0; counter <= 9; counter++)
{
for (column = 0; column <= 9; column++)
{
 multiplier = counter * column;
if (column = 0);
{
_putchar(multiplier + '0');
}
else if (multiplier <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(multiplier + '0');
else if (multiplier >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(multiplier / 10 + '0');
_putchar(multiplier % 10 + '0');
}
}
}
}
_putchar('\n');
}
}
