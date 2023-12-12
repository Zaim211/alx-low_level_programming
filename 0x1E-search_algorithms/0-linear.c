#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t y = 0;

	if (!array || size == 0)
		return (-1);
	while (y < size)
	{
		printf("The value checked array[%lu] = [%d]\n", y, array[y]);
		if (array[y] == value)
			return (y);
		y++;
	}
	return (-1);
}
