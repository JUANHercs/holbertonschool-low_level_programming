#include "holberton.h"

/**
 * _strchr - function returns a pointer to the first occurrence
 *of the character c in the string s
 * @s: sting
 * @c: character to be found
 * Return: ponter of the first adress
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
		s = &s[i];
		return (s);
	}
	}
	return (0);
}
