#include "holberton.h"

/**
 *_strcmp - compares two string
 *@s1: string to compare
 *@s2: string to compare
 *Return: if return < 0 str1 is less than str2
 * if return  > 0 str2 is less than str1
 * if return  = 0 both strings equal
 */

int _strcmp(char *s1, char *s2)
{
	int  i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
