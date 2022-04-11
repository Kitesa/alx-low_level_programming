#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: zero after successful completion
 *
 */
int main(void)
{
int num1;
int num2;

for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = num1 + 1; num2 <= 9; num2++)
{
putchar(num1, num2);
}
}
putchar('\n');
return (0);
}
