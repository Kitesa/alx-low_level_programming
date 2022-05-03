#include "main.h"
#include "stdio.h"
/**
 * main - main entry function
 * @argc: number of arguments
 * @argv: Arguments
 * Return: zero
 */
int main(int argc, char* argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
