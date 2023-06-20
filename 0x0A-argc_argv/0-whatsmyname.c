#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char *name;

	name = argv[0];
	_putchar(name);
	(void)argc;
	
	return (0);
}
