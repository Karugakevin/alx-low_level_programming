#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (int k = 0 ; k <= 14 ; k++)
		{
			if (k > 9)
				_putchar('0' + (k / 10));
			_putchar('0' + (k % 10));
		}
		_putchar('\n');
	}
}
