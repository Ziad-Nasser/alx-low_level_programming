#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - function that returns a ptr to a newly allocated space in memo
 * @str: pointer to array of string
 * Return: 0
 */
char *_strdup(char *str)
{
	int size = 0, i;
	char *n_str;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	n_str = (char *)malloc(sizeof(char) * (size + 1));
	if (n_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[size] != '\0'; i++)
		{
			n_str[i] = str[i];
		}
	}
	return (n_str);
}
