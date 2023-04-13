#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * n_word - bring the number of words in a string
 * @s: string
 * Return: number of words
 */
int n_word(char *s)
{
	int i, number;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != '\0' && s[i + 1] != '\0')
			{
				number++;
			}
		}
		else if (i == 0)
		{
			number++;
		}
	}
	number++;
	return (number);
}

/**
 * **strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	int number = 0, x, y, size = 0, i, j;
	char **word;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word = (char **)malloc(sizeof(char *) * number);
	if (word == NULL)
		return (NULL);
	word[number - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (y = 1; str[x + y] != ' ' && str[x + y] != '\0'; y++)
				;
			y++;
			word[size] = (char *)malloc(sizeof(char) * y);
			y--;
			if (word[size] == NULL)
			{
				for (i = 0; i < size; i++)
					free(word[i]);
				free(word[number - 1]);
				free(word);
				return (NULL);
			}
			for (j = 0; j < y; j++)
				word[size][j] = str[x + j];
			word[size][j] = '\0';
			size++;
			x += y;
		}
		else
			x++;
	}
	return (word);
}
