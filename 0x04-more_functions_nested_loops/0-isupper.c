#include "main.h"
#include <stdio.h>

/**
 * _isupper - return 1 if a is upper esle 0
 * @c: input for the function
 * 
 * Return: return zero
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
