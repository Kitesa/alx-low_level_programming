#include <stdlib.h>
#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: 0 on successful completion
 *
 */
int main(void)
{
char ch;
ch =  'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
