#include"holberton.h"
/**
* prototype  - int _islower(int c)
* Return: 1 if is c, 0 oyherwise[D[D[D
*/

int _islower(int c)
{
	int a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			b = 1;
			return (b);
		}
	 }
	return (0);
}
