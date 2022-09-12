#include <stdio.h>
/**
 * main - Print alphabet in lowercase uppercase and follow by new line
 *
 * Return: value 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');
		return (0);


}
