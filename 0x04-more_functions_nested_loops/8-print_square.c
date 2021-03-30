#include "holberton.h"
/**
 *print_square - function that prints a square
 *@size: size of square
 *Return: void
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= 0; j++)
		{
			_putchar (35);
		}
		_putchar ('\n');
	}
	return;
}
