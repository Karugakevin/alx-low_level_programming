#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: variable of character
 *
 */
void print_rev(char *s)
{
	char *n;

	n = s;
	while (*s != '\0')
	{
		s++;
	}
	for (s = (s - 1) ; s >= n ; --s)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
