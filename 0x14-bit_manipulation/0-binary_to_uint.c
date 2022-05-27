#include "main.h"
#include <stdio.h>

int _power_recursion(int x, int y);

/**
 * binary_to_uint - function with one argument
 * @b: pointer to character
 *
 * Description: converts a binary number to an unsigned integer
 * Return: converted number or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int power = 0;
	int counter = 0;

	if (!b)
		return (0);

	while (b[counter] != '\0')
	{
		if (b[counter] != '\0' && b[counter] != '1')
			return (0);
		counter++;
	}
	counter -= 1;
	while (counter >= 0)
	{
		if (b[counter] == '1')
			number += _power_recursion(2, power);
		power++;
		counter--;
	}
	return (number);
}

/**
 * _power_recursion - function with two arguments
 * @x: int type first argument
 * @y: int type second argument
 *
 * Description: returns the value of x raised to power of y
 * Return: value of x
 */
int _power_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _power_recursion(x, y - 1));
}
