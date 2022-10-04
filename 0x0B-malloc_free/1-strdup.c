#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 *           allocated space in memory,
 *            which contains a copy of the string given as a parameter.
 * @str: The string to be copied.
 *
 * Return: NULL if str = NULL
 *         on success it return duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';
	return (ptr);
}
