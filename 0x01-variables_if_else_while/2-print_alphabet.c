#include <stdio.h>
/**
 * main - Print alphabet in lower case
 *
 * Return: value 0*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'Z'; letter++)
		putchar(letter);

	for (leter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putChar('\n');
	return (0);
}
