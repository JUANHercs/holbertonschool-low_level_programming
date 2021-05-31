#include"holberton.h"

/**
 *jack_bauer -  function that print 24 hours
 *Return: 00:00 to 23:59
 **/

void jack_bauer(void)
{
int a, b, c, d, h, m;

for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
a = h / 10;
b = h % 10;
c = m / 10;
d = m % 10;
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
}
}
