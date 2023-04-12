#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: type of array
 * @size: length of the array
 * @value: element to be searchd
 * Return: -1 if value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [ %d]\n", index,  array[index]);

		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}

