#include <stdio.h>
/**
 * main - entry point
 *
 * Return: value is 0
 */
int main(void)
{
	int num = 100, i;

	for (i = 1; i <= num; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuss");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n")
	return (0)
}
