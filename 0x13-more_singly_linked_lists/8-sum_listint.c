#include "lists.h"

/**
 * sum_listint - Write a function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: the pointer to first node
 *
 * Return: 0 if the list is empty or sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;

		head = head->next;
	}
	return (sum);
}
