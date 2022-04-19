#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * generate random number
 *
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand();

	printf("%i\n", num);
	return (0);
}
