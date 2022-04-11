#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0 on successfull completion
 * */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0) 
	{
		/* 
		 * Print n is positive if it is greater than zero
		 * */
		printf("%d is positive\n", n);
	} else if(n==0)
	{
		/* 
		 * Print n is zero if it is equal to zero
		 * */
		printf("%d is zero\n", n);
	} else 
	{
		/*
		 * Print n is negative if it is less than zero 
		 *
		 * */
		printf("%d is negative\n", n);
	}
return (0);
}
