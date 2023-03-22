#include <stdio.h>

/**
 * main - prints first 50 fibnacci numbers starting with 1 and 2
 * seperted by comma followed by spsace
 *
 * Return: 0 (success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1;
	unsigned long sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
