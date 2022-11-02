#include "search_algos.h"

/**
 * linear_search - search through the numbers
 * @array: is the array
 * @value: is the value
 * @size: is the size
 * Return: void
 */

 int linear_search(int *array, size_t size, int value)
 {
	size_t i = 0;

	if (array == NULL)
	{
		return(-1);
	}
	for(i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if(array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
 }
