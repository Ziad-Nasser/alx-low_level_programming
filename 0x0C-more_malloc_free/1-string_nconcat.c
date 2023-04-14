#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n:  point to a newly allocated space in memory
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, size1 = 0, size2 = 0;

	while (s1 != NULL && s1[size1] != '\0')
	{
		size1++;
	}
	while (s2 != NULL && s2[size2] != '\0')
	{
		size2++;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = (char *)malloc(sizeof(char) * (size1 + n + 1));

	if (str == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		str[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		str[a] = s2[b];
		a++;
	}
	str[a] = '\0';
	return (str);
}
