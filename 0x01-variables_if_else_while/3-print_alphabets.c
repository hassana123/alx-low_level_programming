#include <stdio.h>

/**
 * main - a program that prints letters in the alphabets in lower and uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(tolower(alpha[i]));
		putchar(toupper(alpha[i]));
	}
	putchar("\n");
	return (0);
}
