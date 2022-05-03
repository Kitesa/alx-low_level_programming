#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two number
 * @argc: number of arguments
 * @argv: argument list
 *
 * Return: one
 */
int main(int argc, char *argv[])
{
	if(argc > 0)
		printf("%d\n", argv[1] * argv[2]);
	else
		printf("Error");

	return (1);
}
