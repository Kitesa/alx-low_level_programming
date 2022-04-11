#include <stdlib.h>
#include <stdio.h>
/**
 * main - print alphabets except e and q
 *
 * Return: zero on successfull completion
 *
 */
int main(void)
{
for (letter = 'a'; letter <= 'z', letter++)
{
if(letter != 'e' || letter != 'q')
{
putchar(letter);
}
}
return (0);
}
