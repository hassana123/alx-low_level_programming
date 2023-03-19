#include <stdio.h>

/**
 * main - a program that prints the aphabets in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphie[26] = "zyxwvutsrqpomnlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphie[i]);
	}
	putchar('\n');
	return (0);
}
