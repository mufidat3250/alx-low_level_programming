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
		if (i % 3 == 0)
		{
		printf('Fizz');
		}
		else if (i % 5 == 0)
		{
			printf('Buzz');
		}
		else if (i % 15 == 0)
		{
			printf('FizzBuzz');
		}
		else
		{
			printf("%d", num)
		}
		printf("\n")
	}
	return (0)
}
