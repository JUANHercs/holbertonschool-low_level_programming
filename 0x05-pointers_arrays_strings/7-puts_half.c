#include "holberton.h"

/**
 *puts_half - this function prints seconf half of string
 *@str: the string
 *Return: void
 */

void puts_half(char *str)
{
	int  h, n, le;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	le = n;
	if (le % 2 != 0)
		{
			h = (le - 1) / 2;
		} else
	{
		h = n / 2;
	}
	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
