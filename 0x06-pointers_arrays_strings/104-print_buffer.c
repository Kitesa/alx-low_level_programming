#include "main.h"

/**
 * infinite_add - function with four arguments
 * @n1: char type pointer
 * @n2: char type pointer
 * @r: char type pointer
 * @size_r: int type argumnet
 *
 * Description: adds two numbers from string
 * Return: sum of two integers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int count, count2;

	while (n1[count] != '\0')
		count++;
	while (n2[count2] != '\0')
		count2++;

	*r = *(r + size_r);
	while (n1[count] > 0 || n1[count2] > 0)
	{
		if (n1[count] + n2[count2] > 0)
			*r = n1[count - 1] + n2[count2 - 1] + 1;
		else
			*r = n1[count] + n2[count];
		count--;
		count2++;
	}
	return (r);
}
