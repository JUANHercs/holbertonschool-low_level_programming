#include"holberton.h"
/**
 *print_numbers - print automatic numbers 0 to 9
 *@void: no arguments jus void
 *Return: nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
