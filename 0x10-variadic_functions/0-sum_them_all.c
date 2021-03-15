#include "variadic_functions.h"

/**
 *sum_them_all - function name
 *@n: number of arguments
 *@...: variable number of argumrnts
 *Return: int sum of all args
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, suma = 0;

	va_start(num, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		suma += va_arg(num, int);
	}
	va_end(num);
	return (suma);
}
