#include "main.h"

/**
 * _isupper - Check if aletter is upper
 * @x: The number to be checked
 * Return: 1 for upper letter or  for any else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 9)
	{
		return (1);
	}
	return (0);
}
