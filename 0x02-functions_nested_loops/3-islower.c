#include"holberton.h"

/**
 * _islower - checks if passes character is lowercase
 * @c: is the argument of the protoype
 * Return: 1 if is c, 0 oyherwise
 */
int _islower(int c)
{
	int a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			b = 1;
			return (b);
		}
	}
	return (0);
}
