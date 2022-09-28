#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to be measured
 *
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
