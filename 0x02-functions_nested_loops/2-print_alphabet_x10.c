#include"holberton.h"
/**
 * print_alphabet_x10 - ten times prototype print
 * Return: nose
 */

void print_alphabet_x10(void)
{
	int w, a;

	for (w = 0 ; w <= 10 ; w++)
{
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
}
	_putchar('\n');
}
