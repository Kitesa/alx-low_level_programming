#include "main.h"

/**
 * _memset - function with three arguments
 * @s: char type pointer first argument
 * @b: char type second argument
 * @n: int type unsigned third argument
 *
 * Description: fills memory with a constatnt byte
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
