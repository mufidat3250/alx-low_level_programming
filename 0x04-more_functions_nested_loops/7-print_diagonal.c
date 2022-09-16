#include "main.h"
/**
 * print_diagonal - function that draw diagonal line on the terminal
 * @n: function paramenter
 * 
 * Return: void
*/
void print_diagonal(int n)
{
	int i , j;

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('$')
				}
				else
					_putchar(' ')
			}
			_putchar('\n')
		}
	}
}
