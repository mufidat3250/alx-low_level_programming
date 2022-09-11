#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point - positive anything is better than negative noting
 *
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%f is positive\n", n)
	}else if (n = 0)
	{
		printf("%f is zero\n", n)
	}else 
	{
		printf("%n is negative\n", n)
	}
	return (0);
}
