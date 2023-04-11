#include "search_algos.h"

/**
 * linear_search - searches fora value in an array
 * @array: A pointer to the first index in an array
 * @size: Number of elements in the array
 * @value: The element to be searched
 * Return: if the value is not present or the array is null, -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

