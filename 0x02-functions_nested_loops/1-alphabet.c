#include "main.h"
/**
 * print_alphabet - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 *
 */
void print_alphabet(void)
{
char counter = 'a';

while (counter <= 'z')
{
_putchar(counter);
counter++;
}
_putchar('\n');
}
