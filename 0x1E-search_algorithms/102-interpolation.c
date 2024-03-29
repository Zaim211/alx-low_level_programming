#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * of integers using interpolation search.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, x, y;

	if (array == NULL)
		return (-1);

	for (x = 0, y = size - 1; y >= x;)
	{
		i = x + (((double)(y - x) / (array[y] - array[x])) * (value - array[x]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			y = i - 1;
		else
			x = i + 1;
	}

	return (-1);
}
