#include "sort.h"

/**
 * bubble_sort - that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *
 * @array: Array to be sort
 * @size: Size of the array
 *
 * Return: noting
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, tmp;

	if (!array || size <= 0)
	{
		fprintf(stderr, "Anything");
		exit(1);
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

