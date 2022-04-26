#include "main.h"

/**
 * _memcpy - function with three arguments
 * @dest: char type pointer first argument
 * @src: char type pointer 2nd argumnet
 * @n: unsigned int type third argument
 *
 * Desription: copies memory data
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
