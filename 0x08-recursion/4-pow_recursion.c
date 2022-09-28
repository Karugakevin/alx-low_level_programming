#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number integer
 * @y: number integer
 *
 * Return: -1 if y is less than 0
 *          1 if y is equal to 1
 *          result of function
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
