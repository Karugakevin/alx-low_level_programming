#include "search_algos.h"

/**
 * jump_search - searches value of an integer using jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: value of position in the array
 *         return -1 if value not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int left = 0;
	int right = jump;
	int i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (right < (int)size && array[right] < value)
	{
		printf("Comparing value at index %d\n", right);
		left = right;
		right = right + jump;
	}

	/** linear search in the current block*/
	for (i = left; i <= fmin(right, size - 1); i++)
	{
		printf("Comparing value at index %d\n", i);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
