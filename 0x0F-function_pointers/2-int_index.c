#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - Look for a coincidence of an element
 *@array: Array
 *@size: size of array
 *@cmp: pointer to function
 *Return: index of coincidence if success else -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j, i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		j = cmp(array[i]);
		if (j)
			return (i);

		i++;
	}
return (-1);
}
