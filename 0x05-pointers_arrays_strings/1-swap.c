#include "holberton.h"

/**
 *swap_int - prototype name
 *@a: is the ponyer tan points to an integer
 *@b: is the pointers tha points to an integer
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
