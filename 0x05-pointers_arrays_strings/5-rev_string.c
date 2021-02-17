#include "holberton.h"

/**
 *rev_string - this function reverse a string
 *@s: the string
 *Return: void
 */

void rev_string(char *s)
{
	int  m, j;
	char c;

	for (m = 0; s[m] != '\0'; m++)
	{
	}
	m--;
	for (j = 0; j < m; j++)
	{
		c = s[m];
		s[m] = s[j];
		s[j] = c;
		m--;
	}
}
