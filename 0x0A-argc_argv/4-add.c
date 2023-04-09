#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * checker - checks strings for digits
 * @s: string
 * Return: 0 (succs)
 */
int checker(char *s)
{
	unsigned int count;

	count = 0;
	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - a program that adds positive numbers
 * @argc: num of args
 * @argv: array args
 *
 * Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	int count;
	int sti;
	int sum;

	sum = 0;
	count = 1;
	while (count < argc)
	{
		if (checker(argv[count]))
		{
			sti = _strtoint(argv[count]);
			sum += sti;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
