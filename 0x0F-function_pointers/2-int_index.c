#include "function_pointers.h"

/**
 *int_index - function name
 *@array: array of elements
 *@size: size of array
 *@cmp: pointer to the function that compares
 *Return: int
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i <= size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
