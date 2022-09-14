#include "main.h"
/**
 * main - Function to print putchar followed by a new line
 *
 * Return: Value 0
 */

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for(count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
