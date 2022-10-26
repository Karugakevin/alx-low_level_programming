#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to first node of string
 * @str: string
 *
 * Return: address of new element of NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	int len;
	list_t *ptr, *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	temp->str = new_str;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}

	return (*head);
}
