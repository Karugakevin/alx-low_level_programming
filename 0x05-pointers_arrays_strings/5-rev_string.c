#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: integer
 *
 */
void rev_string(char *s)
{
	int n, i;
	char *end_ptr, ch;

	end_ptr = s;

	for (n = 0 ; *end_ptr != '\0' ; n++)
	{
		end_ptr++;
	}
	end_ptr = end_ptr - 1;

	for (i = 0; i < n / 2 ; i++)
	{
		ch = *end_ptr;
		*end_ptr = *(s + i);
		*(s + i) = ch;
		end_ptr--;
	}
}
