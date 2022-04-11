#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a function print the last digit of the number
 *
 * Return: 0 after succesfull compleion
 *
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf(n%10);
return (0);
}

