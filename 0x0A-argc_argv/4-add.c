#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * main - a program that adds positive numbers
 * @argc: num of args
 * @argv: array args
 *
 * Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	int sum, j;

	sum = 0;
	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			int i;
			char *str;

			str = argv[j];
			for (i = 0; str[i] != '\0'; i++)
			{
				if (str[i] < 48 || str[i] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (j = 1; j < argc; j++)
	{
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
