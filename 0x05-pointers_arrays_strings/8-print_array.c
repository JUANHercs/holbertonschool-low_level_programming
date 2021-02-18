#include "holberton.h"
#include <stdio.h>

/**
 *print_array - this function prints values of the array in order
 *@a: pointer int
 *@n: length of array
 *Return: void
 */

void print_array(int *a, int n)
{
	int h = 0;

	while (h < n)
	{
		*a = a[h];
		printf("%d, ", *a);
		++h;
	}
}
