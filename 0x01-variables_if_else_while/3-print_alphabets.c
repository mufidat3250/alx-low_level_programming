#include <stdio.h>
/**
 * main - Print alphabet in lowercase uppercase and follow by new line
 *
 * Return: value 0
 */

int main(void)
{
	int result;

	for (result = 'a'; result <= 'z'; result++)
		putchar(result);
	for (result = 'A'; result <= 'Z'; result++)
		putchar(result);

	putchar("\n");
		return (0);


}
