#include "holberton.h"

/**
 *print_rev - prints a string backwards
 *@s: the string
 *Return: void
 */

void print_rev(char *s)
{
	int  m = 0, j;

	while (*(s + m) != '\0')
	{
		m++;
	}
	j = m - 1;
	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
