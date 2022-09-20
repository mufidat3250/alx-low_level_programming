#include "main.h"
/**
 * strlen - - checking the length of string
 * @s: function parameter
 *
 *Return: length of string in integer
 */

int strlen(vhar *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
