#include "holberton.h"
#include <stdio.h>

/**
 **_strncat - prototype
 *@dest: pointer to char
 *@src: pointer to char
 *@n: arary length
 *Return: pointer to resulting string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int ii = 0;
	while (dest[ii] != '\0')
	{
		ii++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[ii + i] = src[i];
	}
	dest[ii + i] = '\0';

	return (dest);
}
