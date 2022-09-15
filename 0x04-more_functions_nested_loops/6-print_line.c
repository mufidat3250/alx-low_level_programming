#include "main.h"
/**
 * print_line - function to draw a straight line in terminal
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i <= n; i++)
			putchar('-');
	}
	_putchar('\n');
	
}

