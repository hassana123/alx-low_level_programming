#include "main.h"

/**
 * _isupper - program checks for an uppercase character
 * @c: charaacter to be checked
 *
 * Return: 1 if uppercse, otherwise return 0
 */
int _isupper(int c)
{
	if ((c >= 65) || (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
