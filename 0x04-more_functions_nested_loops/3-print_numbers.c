#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: void
 */

void print_numbers(void)

{
	char c;

	c = 0;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
}
