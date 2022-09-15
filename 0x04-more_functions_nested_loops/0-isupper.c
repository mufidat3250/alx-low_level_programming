#include "main.h"
/**
 * _isupper - function to check for upper case charaacter
 *
 * Return: value 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
