#include <stdlib.h>
#include <time.h>
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
	if (n>0){
		printf("%d is positive", n);
	}else{
		printf("%d is negative", n);
	}
return (0);
}
