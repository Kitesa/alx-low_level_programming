#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 time
 *
 */
void print_alphabet_x10(void)
{
int counter;
char alphabet;

for (counter = 0; counter < 10; counter++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
