#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of elements 
 * @size: size of each element
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ze;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ze = (char *)malloc(nmemb * size);
	if (ze == NULL)
	{
		return (NULL);
	}
	memset(ze, 0, nmemb * size);
	return (ze);
}
