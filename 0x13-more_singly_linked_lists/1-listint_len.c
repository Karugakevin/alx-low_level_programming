#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: head pointing to the first node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
