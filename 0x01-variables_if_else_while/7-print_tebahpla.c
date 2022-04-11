#include <stdlib.h>
#include <stdio.h>
/**
 * main - print letters in reverse order
 *
 * Return: 0 on completion
 *
 */
int main(void)
{
char letter = 'z';
while ( letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
