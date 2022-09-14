#include "main.h"
/**
 * main - function that print alphabet in lowercase followed by newline
 * Return: Always 0
 */

int main(void)
{
	char alpha[] = {'a', 'l', 'p', 'h', 'a', 'b', 'e', 't'};
	int count , size
	size = sizeof(alpha) / sizeof(alpha[0])
	for (count = 0; count < size; count++)
	{
		print_alphabet(alpha[count]);
		_putchar('\n');
	}
	return (0);
}
