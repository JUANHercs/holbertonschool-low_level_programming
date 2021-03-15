#include "variadic_functions.h"

/**
 *print_numbers - function name
 *@separator:string to be printed between numbers
 *@n:number of int passed by the function
 *@...: variable number of argumrnts
 *Return: void
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;

	va_start(op, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d",va_arg(op, int));
	if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}
	va_end(op);
	printf("\n");

	return;
}
