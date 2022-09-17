#include <std.io>
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
			printf("FizzBuss\n")
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buss\n");
		}
		else
			printf("%d\n", num);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n")
	return (0)
}
