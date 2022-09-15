#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: The number to be printed
 *
 * Return: 1 if the number is greater than zero
 *         0 if the number is equal to zero
 *         -1 if it less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
}
