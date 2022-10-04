#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: length of first array
 * @height: length of other array
 *
 * Return: NULL on failure or double pointer for success
 */
int **alloc_grid(int width, int height)
{
	int **prt;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	prt = malloc(sizeof(int *) * height);

	if (prt == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		prt[hgt_index] = malloc(sizeof(int) * width);

		if (prt[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(prt[hgt_index]);

			free(prt);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			prt[hgt_index][wid_index] = 0;
	}
	return (prt);
}
