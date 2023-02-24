#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Description: prints the number excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			putchar(x + '0');
		}
	}
	putchar('\n');
}
