#include "main.h"

/**
 * print_numbers - function that print numbers from zero to nine
 * @void: no parameter to check
 *
 * Return : return value is void
 */

void print_numbers(void)
{
	int num

	for (num = 0; num <= 9; num++)
	{
		_putchar((num % 10) + '0')
	}
	_putchar('\n')
}
