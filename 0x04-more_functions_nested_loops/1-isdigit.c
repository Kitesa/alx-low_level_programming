#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks whethr an input is digit or not
 *
 * @c: input to the function
 * Return: Always zero
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
