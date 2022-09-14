#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	int num;
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		for (num = i ; num <= 10 ; num++)
			_putchar(i);
		_putchar('\n');
	}
}
