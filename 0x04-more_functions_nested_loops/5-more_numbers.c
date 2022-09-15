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
			if (j > 9)
				_putchar((j % 10), '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
