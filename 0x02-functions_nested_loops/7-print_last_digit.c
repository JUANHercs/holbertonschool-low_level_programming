#include"holberton.h"
/**
 * print_last_digit - Function tht returns the las value of a number
 * @n: the argument of the function a number int
 * Return: the las number int
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	_putchar(l + '0');
	return (l);
}
