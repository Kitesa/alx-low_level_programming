#include <stdlib.h>
#include <stdio.h>
/**
 * main - print numbers as char
 *
 * Return: return zero on successfull completion
 *
 */
int main(void)
{
int num = 0;

while (num < 10)
{
putchar("%d", num);
num++;
}
putchar('\n');
return (0);
}

