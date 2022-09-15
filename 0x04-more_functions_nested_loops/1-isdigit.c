#include "main.h"
/**
 * _isdigit - write a function to check for digit
 * @c: the character to check
 * Return: value is 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
