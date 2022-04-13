#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 time
 *
 */
void print_alphabet_x10(void)
{
int counter;
char alphabet = 'a';

for (counter = 0; counter < 10; counter++)
{
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
}
