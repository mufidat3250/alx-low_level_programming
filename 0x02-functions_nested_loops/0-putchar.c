#include "main.h"
/**
 * main - Function to print putchar followed by a new line
 *
 * Return: Value 0
 */

int main(void)
{
	char str[] = '_putchar';
	int count, sz;

	sz = sizeof(str) / sizeof(str[0]);
	for(count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
