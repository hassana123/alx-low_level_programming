#include "main.h"
#include <stdio.h>

/**
 * main  - a program that prints its name, followed by a new line
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
