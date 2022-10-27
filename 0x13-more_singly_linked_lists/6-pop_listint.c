#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * node of a listint_t linked list
 * @head: the pointer to first node of the list
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}

