#include "holberton.h"

/**
 *puts_half - this function prints seconf half of string
 *@str: the string
 *Return: void
 */

void puts_half(char *str)
{
	int  n;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	length_of_string = n-1;
	if (length_of_string % 2 != 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
