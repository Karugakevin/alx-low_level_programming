#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * @dest: Array
 * @src: value of array
 * Return: it returns debt
 *
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
