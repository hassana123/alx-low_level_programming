#include <stdio.h>

/**
 * main - a program that prints letters in the alphabets in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxy";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
