#include "holberton.h"
/**
 **_strcat - prototuype
 *Return: pointer to resulting string
 **/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int e = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[e] != '\0')
	{
		dest[i] = src[e];
		i++;
		e++;
	}
	return (dest);
}
