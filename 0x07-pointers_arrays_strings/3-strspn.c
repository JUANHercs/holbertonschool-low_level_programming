#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefixz substring
 * @s: initial string
 * @accept: 2nd string
 * Return: p, returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int a = 0, b;

	for (i = 0; s[i] > ' '; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[i])
			{
				a += 1;
			}
		}
	}
	return (a);
}
