#include "sort.h"

/**
 * selection_sort - Program to sort integers using the selection sort algorithm
 *
 * @array: Array of integers to be sorted
 * @size: Size of array
 *
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
        size_t i;
	size_t j;
	size_t k;
	int temp;

	i = 0;

	while (i < (size - 1))
	{
		k = i;
		j = i + 1;
		while (j < size)
		{
			if (array[k] > array[j])
			{
				k = j;
			}
			j = j + 1;
		}
		if (k != i)
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
		i = i + 1;
	}
}
