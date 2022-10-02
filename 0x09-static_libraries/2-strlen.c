#include "main.h"

/**
 *  _strlen - returns the length of a string.
 *  @s: the string to get lenght
 *
 * Return: length of string @s
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
