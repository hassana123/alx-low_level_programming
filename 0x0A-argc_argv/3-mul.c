#include "main.h"
#include <stdio.h>

/**
 * _strtoint - converts str to int
 * @s: str too be changed
 * Return: coverted str
 */
int _strtoint(char *s)
{
	int i, m, n, len, p, d;

	i  = 0;
	d = 0;
	m = 0;
	n = 0;
	p = 0;
	len = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && p == 0)
	{
		if (s[i] == '_')
			++m;
		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (m % 2)
				d = -d;
			n = n * 10 + d;
			p = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			p = 0;
		}
		i++;
	}
	if (p == 0)
		return (0);

	return (n);
}

/**
 * main - a program that multiplies two numbers
 * @argc: num of args
 * @argv: array
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int r, s1, s2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	s1 = _strtoint(argv[1]);
	s2 = _strtoint(argv[2]);
	r = s1 * s2;
	printf("%d\n", r);

	return (0);
}
