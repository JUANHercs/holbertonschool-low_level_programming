#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 **_strncat - prototype
 *@dest: pointer to char
 *@src: pointer to char
 *@n: arary length
 *Return: pointer to resulting string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
