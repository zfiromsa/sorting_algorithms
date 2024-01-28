#include "sort.h"

void counting_sort(int *array, size_t size)
{
	int *ca, *oa;
	size_t i, k;

	if (array == NULL || size < 2)
	{
		exit(EXIT_FAILURE);
	}
	k = 0;
	for (i = 0; i < size; i++)
	{
		if (array[i] > k)
		k = array[i];
	}
	ca = malloc((k + 1) * sizeof(int));
	oa = malloc(size * sizeof(int));
	if (ca == NULL || oa == NULL)
	{
		free(ca);
		free(oa);
		return;
	}
	for (i = 0; i <= k; i++)
	{
		ca[i] = 0;
	}
	for (i = 0; i < size; i++)
	{
		ca[array[i]]++;
	}
	for (i = 1; i <= k; i++)
	{
		ca[i] += ca[i - 1];
	}
	for (i = size - 1; i < k; i--)
	{
		oa[ca[array[i]] - 1] = array[i];
		ca[array[i]]--;
	}
	oa[ca[array[i]] - 1] = array[i];
	ca[array[i]]--;
	for (i = 0; i < size; i++)
		array[i] = oa[i];
	free(ca);
	free(oa);
}


