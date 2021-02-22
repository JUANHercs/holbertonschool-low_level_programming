#include "holberton.h"

/**
 * _memset - function fills the first n bytes of the memory area
 *  pointed to by s with the constant byte b.
 * @n: fist n bytes of the memoruy area pointed to
 * @b: constant byte
 * @s: adress of buffer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
