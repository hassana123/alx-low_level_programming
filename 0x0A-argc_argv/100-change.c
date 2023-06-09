#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 * @args: arguments count
 * @argv: arguments array
 *
 * Return: 0 (success)
 */
int main(int args, char *argv[])
{
	int i, coins;

	coins = 0;
	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; i >= 0;)
	{
		if (i >= 25)
			i -= 25;
		else if (i >= 10)
			i -= 10;
		else if (i >= 5)
			i -= 5;
		else if (i >= 2)
			i -= 2;
		else if (i >= 1)
			i -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
