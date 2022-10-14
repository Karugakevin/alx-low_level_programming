#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: value of parameter
 *
 * Return: 0 if value of n is zero
 *         sum for all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	int sum = 0;

	va_start(add, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(add, int);

	va_end(add);
	return (sum);
}

