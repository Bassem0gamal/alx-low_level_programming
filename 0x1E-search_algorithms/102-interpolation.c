#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * sorted integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, j, o;

	if (array == NULL)
		return (-1);

	for (j = 0, o = size - 1; o >= j;)
	{
		i = j + (((double)(o - j) / (array[o] - array[j])) * (value - array[j]));
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
			o = i - 1;
		else
			j = i + 1;
	}

		return (-1);
}
