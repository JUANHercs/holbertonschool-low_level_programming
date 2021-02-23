#include "holberton.h"

/**
 * _memcpy - function fills n bytes of the memory area
 * @dest: memory area dest
 * @src: memory area source
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	return (dest);
}
