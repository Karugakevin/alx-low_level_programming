#include "main.h"

/**
 * _islower - checks to see if character is a lower case
 * @c: The character to be checked.
 *
 * Return: 1 if character is lower case 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
