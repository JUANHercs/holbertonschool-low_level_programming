#include "dog.h"
#include <stdio.h>

/**
 *print_dog - function prints struct dog
 *@d: pointer of struct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
		{
		printf("(nil)");
		return;
		}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	} else
	{
		printf("Name: %s\n", d->name);
	}
			printf("Age: %f\n", d->age);
       	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	} else
	{
		printf("Owner: %s\n", d->owner);
	}
}
