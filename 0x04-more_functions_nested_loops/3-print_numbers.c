#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: always zero
 *
 */
void print_numbers(void)
{
	int a = 0;
	
	while (a < 10)
	{
		_putchar (a + '0');
		a++;
	}
	_putchar ('\n');
}
