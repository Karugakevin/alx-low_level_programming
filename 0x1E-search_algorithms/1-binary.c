#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 *                 of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of element in the array
 * @value: the value of the search
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = 0; i <= size; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}

	return (-1);
}
