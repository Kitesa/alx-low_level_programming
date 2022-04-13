#include "main.h"
/**
 *
 * main - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: void after completion
 *
 */
void print_alphabet(void)
{
char counter = 'a';

while (counter <= 'z')
{
putchar(counter);
}
putchar('\n');
return (0);
}
