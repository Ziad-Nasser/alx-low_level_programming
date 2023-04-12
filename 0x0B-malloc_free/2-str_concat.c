#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - function that concatenates two strings
 * @s1: array1
 * @s2: array2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *n_str;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	n_str = (char *)malloc(sizeof(char) * (size1 + size2) + 1);
	if (n_str == NULL)
	{
		return (NULL);
	}
	size1 = 0, size2 = 0;
	for (i = 0; i <= size1 + size2; i++)
	{
		if (size1 > i)
		{
			n_str[i] = s1[i];
		}
		else
		{
			n_str[i] = s2[i - size1];
		}
	}
	n_str[size1] = '\0';
	return (n_str);
}
