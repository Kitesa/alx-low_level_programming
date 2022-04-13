#include "main.h"
/**
 * print_sign - check sign
 *
 * @c: an input to print_sign function
 *
 * Return: 1 if true 0 else
 *
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}
