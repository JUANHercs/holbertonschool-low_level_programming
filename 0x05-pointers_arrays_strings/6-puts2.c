#include "holberton.h"

/**
 *puts2 - this function prints even numbers
 *@str: the string
 *Return: void
 */

void puts2(char *str)
{
	int  n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
