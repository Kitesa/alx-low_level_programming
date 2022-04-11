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
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
if (letter == 'e' || letter == 'q')
{
letter++;
continue;
}
letter++;
}

return (0);
}
