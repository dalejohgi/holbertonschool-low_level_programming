# include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 * @array: Pointer to the first element of an array in ascending order
 * @size: size of the array
 * @value: Value to search for
 * Return: The first index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int half, low, high, j;

	if (array == NULL)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (j = 0; j < size - 1; j++)
		printf("%d, ", array[j]);
	printf("%d\n", array[j]);
	low = 0;
	half = (size - 1) / 2;
	high = size - 1;
	while (low < high)
	{
		if (value < array[half])
		{
			high = half - 1;
			half = (low + high) / 2;
		}
		else if (value > array[half])
		{
			low = half + 1;
			half = (low + high) / 2;
		}
		else
		{
			return (half);
		}
		printf("Searching in array: ");
		for (j = low; j < high; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
	}
	return (-1);
}
