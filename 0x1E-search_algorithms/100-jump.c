#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * sorted array of integers using the Jump search algorithm
 *
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, prev;

	if (array == NULL || size == 0)
		return (-1);

	prev = sqrt(size);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += prev;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
