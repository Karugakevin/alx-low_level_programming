#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: function should return NULL on failure
 *         pointer to pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *con_prt;
	int i, mrgd_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	con_prt = malloc(sizeof(char) * len);

	if (con_prt == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con_prt[mrgd_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		con_prt[mrgd_index++] = s2[i];

	return (con_prt);
}
