#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (c < 10)
		{
			if (c != d && d != e && e < d && d < c)
			{
				putchar('0' + e);
				putchar('0' + d);
				putchar('0' + c);

				if (c + d + e != 9 + 8 + 7)
				{
					putchar(',');
					putchar(' ');
				}
				e++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}


