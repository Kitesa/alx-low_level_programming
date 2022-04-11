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

do 
{
	if (letter == 'e' || letter == 'q')
	{
		letter++
		continue;
	}
	putchar(letter);
	letter++
while(letter <= 'z');	
return (0);
}
