#include <stdlib.h>
#include <stdio.h>
/**
 * main - print lowercase and uppercase alphabet
 *
 * Return: zero at the end
 *
 */
int main(void)
{
ch_lower = 'a';
ch_upper = 'A';

while (ch_lower <= 'z')
{
putchar(ch_lower);
ch_lower++;
}
while (ch_upper <= 'Z')
{
putchar(ch_upper);
ch_upper++;
}
putchar('\n');
return (0);
}

