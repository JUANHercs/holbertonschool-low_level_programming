#include "holberton.h"

/**
 * *_strncpy - function that copies a string
 *@dest: string destiny
 *@src: string to be copy
 *@n: number of characters to be copied,  n bytes are copied.
 *Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
