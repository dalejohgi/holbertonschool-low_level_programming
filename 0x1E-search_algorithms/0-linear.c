# include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @array: Pointer to the first element of an array
 * @size: size of the array
 * @value: Value to search for
 * Return: The first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; array[i] != value && i != size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	if (array[i] == value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		return (i);
	}
	else
	{
		return (-1);
	}
}
