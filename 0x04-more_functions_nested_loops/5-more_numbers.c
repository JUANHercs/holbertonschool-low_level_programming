#include"holberton.h"
/**
 *more_numbers - function prints 0 to 14 ten times
 *Return: void
 */

void more_numbers(void)
{
	int c, x, y, z;

	for (c = 0; c < 10; c++)
	{
	for (x = 0; x < 15; x++)
	{
		y = x;
		if (x > 9)
		{
			y = x / 10;
			z = x % 10;
		}
		_putchar(y + 48);
		if (x > 9)
		{
			_putchar(z + 48);
		}
	}
	_putchar('\n');
	}
}
