#include"holberton.h"
/**
 * _abs - absolute value of an integer
 * @c: argument q
 * Return: int
 */

int _abs(int c)
{
	if (c >= 0 || c == 0)
	{
		return (c);
	}
	c = c * -1;
	return (c);
}
