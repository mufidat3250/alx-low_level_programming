#include "main.h"
/**
 * print_diagonal - function that draw diagonal line on the terminal
 * @n: function paramente
 * Return: void
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
		}	_putchar('\n');
	}
}
