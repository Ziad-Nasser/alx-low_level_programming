#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *n_arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	n_arr = (int *)malloc(sizeof(int) * size);
	if (n_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		n_arr[i] = min++;
	}
	return (n_arr);
}
