#include "main.h"
#include <ctype.h>
/**
 * _isupper - function to check for upper case charaacter
 *
 * Return: value 0 or 1
 */
int _isupper(int c)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int size = strlen(alphabet);

	for (int i = 0; i < size; i++)
	{
		if (c == toupper(alphabet[i]))
			return (1);
		else
			return (0)
	}
}
