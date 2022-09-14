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
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
