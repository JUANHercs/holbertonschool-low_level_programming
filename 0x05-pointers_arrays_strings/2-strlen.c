#include "holberton.h"

/**
 *_strlen - prototype name
 *@s: is the value of the array
 *Return: lenght of string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
