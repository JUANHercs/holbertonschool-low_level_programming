#include "holberton.h"
#include <stdio.h>

/**
 *_strcpy - copies the string pointed to inluding terminating null
 *@dest: buffer pointed
 *@src: string
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}