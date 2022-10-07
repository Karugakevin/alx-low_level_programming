#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using
 * @nmemb: The number of elements.
 * @size: The byte size of each array element
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 *         Otherwise - a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
