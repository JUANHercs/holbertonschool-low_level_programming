#include"holberton.h"
/**
 *print_most_numbers - print automatic numbers 0 to 9 but 2 and 4 dont
 *@void: no arguments jus void
 *Return: nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		while (n != 50 && n != 52)
		{
		_putchar(n);
		break;
		}
	}
	_putchar('\n');
}
