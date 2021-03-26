#include <stdio.h>

int main(void)
{
	int n, m;

	for (n = '0'; n <= '8'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if (n != m && n < m)
			{
				putchar(n);
				putchar(m);
				if (n == '8' && m == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
