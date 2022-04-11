#include <stdio.h>
#include <stdlib>
/**
 * main - print hexadecimal
 *
 * Return: 0 on success
 *
 */
int main(void)
{
char base_16_alphabet;

for (base_16_alphabet = 48; base_16_alphabet <= 57; base_16_alphabet)
{
putchar(base_16_alphabet);
}
for (base_16_alphabet = 97; base_16_alphabet <= 102; base_16_alphabet++)
{
putchar(base_16_alphabet);
}
putchar('\n');
return (0);
}
