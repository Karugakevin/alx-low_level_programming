#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to first node of the the list
 *
 * Return: the head pointer of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
