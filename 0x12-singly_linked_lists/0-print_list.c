#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all elements of a list
  * @h: a list to print elements
  * Return: the number of nodes in list
  */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}
	return (node);
}
