#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int r, c;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			for (c = 0; c < r; c++)
				_putchar(' ');
			_putchar('\\');

			if (r == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
