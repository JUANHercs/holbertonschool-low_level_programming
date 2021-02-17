#include "holberton.h"

/**
 *puts_half - this function prints seconf half of string
 *@str: the string
 *Return: void
 */

void puts_half(char *str)
{
	int  h, n, length_of_string;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	length_of_string = n;
	if (length_of_string % 2 != 0)
		{
			h = (length_of_string - 1) / 2;
		}
	h = n / 2;
	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
