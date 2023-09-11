#include "sort.h"

/**
 * bubble_sort - Program to sort integers using the the Bubble sort algorithm
 *
 * @array: Array of integers to be sorted
 * @size: Size of array
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;

	i = 0;

	if (array == NULL)
	{
		return;
	}

	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			j = j + 1;
		}
		i = i + 1;
	}
}
