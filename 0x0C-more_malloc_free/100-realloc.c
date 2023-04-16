#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc -  reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: old size of array
 * @new_size: new size of array
 * Return: array or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *potr;
	char *p;
	unsigned int i;

	if (new_size > old_size)
	{
		potr = (char *)malloc(new_size);
		free(ptr);
		return (potr);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		potr = malloc(new_size);
		if (potr == NULL)
			return (NULL);
		free(ptr);
		return (potr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = ptr;
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			potr[i] = p[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			potr[i] = p[i];
	}
	free(ptr);
	return (potr);
}
