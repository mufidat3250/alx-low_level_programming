#include "main.h"
/**
 * print_line - function to draw a straight line in terminal
 * @n: number of character to be printed
 * Return: void
 */
void print_line(int n)
{	int i;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

