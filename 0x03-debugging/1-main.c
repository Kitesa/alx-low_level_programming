#include <stdio.h>

/**
 * main - main - causes an infinite loop
 *
 * Return: zero
 *
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*
	 * while (i < 10)
	 * {
	 *
	 * Infinete loop - no increment was given
	 * 	putchar(i);
	  }
	 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
