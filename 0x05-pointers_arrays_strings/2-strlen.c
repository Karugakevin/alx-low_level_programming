#include "main.h"

/**
 *  _strlen - returns the length of a string.
 *  @s: the string to get lenght
 *
 * Return: length of string @s
 */
int _strlen(char *s)
{
	int lenght;

	while (*s++)
		lenght++;

	return (lenght);
}
