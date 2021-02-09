#include"holberton.h"

/**
 * _isalpha - checks if passes character inside alphabet
 * @c: is the argument of the protoype
 * Return: 1 if is c, 0 oyherwise
 */
int _isalpha(int c)
{
	int a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			b = 1;
			return (b);
		} else if (c >= 'A' && c <= 90)
		{
			return (1);
		}
	}
	return (0);
}
