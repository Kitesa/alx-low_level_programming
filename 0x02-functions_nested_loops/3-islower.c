#include "main.h"
/**
 * _islower - checks for lowercase character.
 *
 * c - an input parameter for function _islower
 *
 * Return: zero after successfull completion
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
