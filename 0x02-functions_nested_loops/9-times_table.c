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
_putchar(counter * 2);
_putchar(',');
_putchar(' ');
}
_putchar('$');
_putchar('\n');
}
}
