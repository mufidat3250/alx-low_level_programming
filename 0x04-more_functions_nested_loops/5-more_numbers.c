#include "main.h"
/**
 * more_numbers- function that print 10 times the number
 *	 from 0-14 followed by new line
 */
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			_putchar((j % 14), '0');
		}
		_putchar((i % 14), '0')
	}
	_putchar('\n')
}
