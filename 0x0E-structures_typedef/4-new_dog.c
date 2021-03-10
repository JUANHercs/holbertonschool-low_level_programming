#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *slen - function that count the length fo string
 *@cont:the elements of string
 *@s: string for count
 *Return: number of elements in the string length
 **/

int slen(char *s)
{
	int cont = 0;

	while (*s)
	{
		cont++;
		s++;
	}
	return (cont);
}

/**
 *scopy - function cpies the string pointed
 *@dest: cpied string
 *@str: string
 *@i: parameter
 *Return: dest
 **/

char *scopy(char *dest, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		++i;
	}
	return (dest);
}

/**
 *new_dog - function new
 *@name: name of new dog
 *@age: age of the new dog
 *@owner: the dueño
 *Return: pointer to struct
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	char *o;
	char *n;
	int i, j;

	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);

	i = slen(name);
	j = slen(owner);

	n = malloc(i + 1);
	if (n == NULL)
	{
		free(mydog);
		return (NULL);
	}

	o = malloc(j + 1);
	if (o == NULL)
	{
		free(mydog);
		free(n);
		return (NULL);
	}

	n = scopy(n, name);
	o = scopy(o, owner);

	mydog->name = n;
	mydog->age = age;
	mydog->owner = o;
	return (mydog);
}
