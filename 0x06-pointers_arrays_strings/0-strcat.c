#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenate two string
 * @dest: first function parameter for destination
 * @src: second function parameter
 * Return: A pointer 
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (*(dest + len))
		i++;
	while ((*(dest + len) = *(src + i)))
	{
		len++;
		i++;
	}
	return (dest);
}
