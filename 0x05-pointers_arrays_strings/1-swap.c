#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: An integer to swap
 *
 * @b: another integer to swap
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int swap;
	
	swap = *a;
	*a = *b;
	*b = swap;

}
