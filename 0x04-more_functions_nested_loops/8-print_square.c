#include "main.h"

/**
 * print_square - function that print square followed by new line
 * @size: parameter
 * Return: value is void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar("#");
			}
			_putchar("\n");
		}
	}
}
