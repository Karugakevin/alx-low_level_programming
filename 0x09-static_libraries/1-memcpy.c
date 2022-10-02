#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: size of bites
 *
 * Return: pointer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
