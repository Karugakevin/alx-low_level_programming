#include "lists.h"

/**
 * reverse_listint - Write a function that
 * reverses a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentnode = NULL;
	listint_t *nextnode = NULL;

	while ((*head) != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = currentnode;
		currentnode = *head;
		*head = nextnode;
	}

	*head = currentnode;

	return (*head);
}
