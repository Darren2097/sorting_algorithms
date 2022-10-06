#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int temp = 0;

	if (array == NULL)
		return;

	while (i < size)
	{
		if (array[i + 1] < array[i])
		{
			temp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = temp;
			i++;
			print_array(array, size);
		}
	}
}
