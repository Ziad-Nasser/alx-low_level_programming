#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array -  function that creates an array of chars
 * @size: size of the array
 * @c: specific initialized char
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
