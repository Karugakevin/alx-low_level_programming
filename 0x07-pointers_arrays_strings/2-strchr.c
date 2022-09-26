#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to @s
 * @s. Returns NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
