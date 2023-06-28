#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @n: pointer to the string to print
 * Rreturn: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
