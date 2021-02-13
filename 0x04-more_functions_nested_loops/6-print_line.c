#include"holberton.h"
/**
 *print_line - function prints lines
 *@n: variable
 *Return: void
 */

void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (b = 0; b < n; b++)
	{
		_putchar(95);
	}
}
