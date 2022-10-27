#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: the pointer to the first node
 * @n: data to be passed to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (*head);
}
