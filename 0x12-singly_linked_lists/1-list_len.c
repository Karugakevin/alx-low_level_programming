#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: headerfile
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
