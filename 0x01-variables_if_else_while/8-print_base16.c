#include<stdio.h>

/**
 * main - aprogram that prints ony hexadecimal numbers and characters
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
