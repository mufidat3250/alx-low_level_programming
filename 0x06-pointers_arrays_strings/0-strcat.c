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
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
