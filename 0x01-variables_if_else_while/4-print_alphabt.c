#include <stdio.h>
/*
 * main - Print alphabet in lower casse
 *
 * Return : value 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != q && letter != e)
			putchar(letter);
	}

	return (0);
}
