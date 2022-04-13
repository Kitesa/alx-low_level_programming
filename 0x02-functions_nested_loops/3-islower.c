#include "main.h"
/**
 * _islower - checks for lowercase character.
 *
 *@c: an input parameter for function _islower
 *
 * Return: zero 0 for uppercase and 1 for lowercase
 * 
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
