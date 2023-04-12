#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments
 * @ac: input
 * @av: 2d pointer array of string
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int size1, size2, tsize = 0, rtsize = 0;
	char *n_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (size1 = 0; size1 < ac; size1++)
	{
		for (size2 = 0; av[size1][size2]; size2++)
		{
			rtsize++;
		}
	}
	rtsize += ac;
	n_str = (char *)malloc(sizeof(char) * rtsize + 1);

	if (n_str == NULL)
	{
		return (NULL);
	}
	for (size1 = 0; size1 < ac; size1++)
	{
		for (size2 = 0; av[size1][size2]; size2++)
		{
			n_str[tsize] = av[size1][size2];
			tsize++;
		}
		n_str[tsize] = '\n';
		tsize++;
	}

	n_str[tsize] = '\0';
	return (n_str);
}
