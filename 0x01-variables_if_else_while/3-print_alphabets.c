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
char ch_upper = 'A';
char ch_lower = 'a';
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

