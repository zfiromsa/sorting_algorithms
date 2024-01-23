#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: array of unsorted list.
 * @size: the size of array.
 * Return: nothing.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, _min;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[_min])
				_min = j;
		}
		if (_min != i)
		{
			tmp = array[_min];
			array[_min] = array[i];
			array[i] = tmp;
		}
		print_array(array, size);
		i++;
	}
}

