#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked -  function that allocates memory using malloc
 * @b: number of bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = (int *)malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
