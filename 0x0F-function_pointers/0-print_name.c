#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - print name
 *@name: name to be print
 *@f: function pointer
 *Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
