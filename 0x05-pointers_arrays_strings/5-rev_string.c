#include "main.h"

/**
 * rev_string - reverse a sting
 * @s: the string to be modified
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i -1;
	
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
