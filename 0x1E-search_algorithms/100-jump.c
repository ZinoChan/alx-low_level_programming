#include "search_algos.h"

/**
 * min - find min of a & b
 * @a: The first value
 * @b: The second value
 * Return: The minimum of the two values
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * linear_search - Perform linear search on a subarray
 * @array: Pointer to the first element of the subarray
 * @start: Starting index of subarray
 * @end: Ending index of subarray
 * @value: Value to search for
 * Return: The index where value is located or -1 if not found
 */
int _linear_search(int *array, size_t start, size_t end, int value)
{
	for (size_t i = start; i < end; ++i)
	{
		printf("%d\n", array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * jump_search - Jump Search on a sorted array
 * @array: Pointer to the first element
 * @size: Number of elements
 * @value: The value to search for
 * Return: The index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t block_size = sqrt(size);
	size_t prev = 0;

	while (array[min(block_size, size) - 1] < value)
	{
		printf("%d\n", array[min(block_size, size) - 1]);
		prev = block_size;
		block_size += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	return (_linear_search(array, prev, min(block_size, size), value));
}

