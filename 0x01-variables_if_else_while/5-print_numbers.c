#include <stdlib.h>
#include <stdio.h>
/**
 *
 * main - print single digit numbers of base 10
 *
 * Return - zero after successful comletion
 *
 */
int main(void)
{
int digit = 0;

while (digit < 10)
{
printf("%d", digit);
digit++;
}
printf("\n");
return (0);
}
