#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 time
 *
 */
void print_alphabet_x10(void)
{
int counter = 0;
char alphabet = 'a';

while (counter < 10)
{
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
counter++;
_putchar('\n');
}
}
