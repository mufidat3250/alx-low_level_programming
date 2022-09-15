#include "main.h"
/**
 * print_line - function to draw a straight line in terminal
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

