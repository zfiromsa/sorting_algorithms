#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 *               Bubble sort algorithm
 *
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;
    listint_t *current;

    if (array == NULL || size < 2)
        return;

    /* Traverse the list size times */
    for (i = 0; i < size; i++)
    {
        current = (listint_t *)array;

        /* Traverse the list from the beginning to the end */
        for (j = 0; j < size - i - 1; j++)
        {
            /* If the current element is greater than the next element, swap them */
            if (current->n > current->next->n)
            {
                temp = current->n;
                current->n = current->next->n;
                current->next->n = temp;
            }
            /* Move to the next element */
            current = current->next;
        }
    }
}
