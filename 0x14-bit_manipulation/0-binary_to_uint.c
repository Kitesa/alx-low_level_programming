#include "main.h"
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned integer)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int counter;

	for (decimal = 0, counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[counter] == '0')
			decimal <<= 1;
		else if (b[counter] != '0' && b[counter] != '1')
			return (0);
	}

	return (decimal);
}
