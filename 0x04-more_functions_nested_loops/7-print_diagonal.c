#include "main.h"
/**
 * print_diagonal - function that draw diagonal line on the terminal
 * @n: function paramente
 * Return: void
*/
void print_diagonal(int n)
{
	int i = 0; int j;

	while (n > 0)
	{
		i++;
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		putchar('\\')
	}
	_putchar('\n')
}
