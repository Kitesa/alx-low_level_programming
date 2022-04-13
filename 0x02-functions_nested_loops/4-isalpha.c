#include "main.h"
/**
 * _isalpha - checks whether input is alphabet or not
 *
 * @c: input value
 *
 * Return: 1 if input is alphabet 0 if not
 *
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
