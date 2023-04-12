#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional arrab
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. arrab
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		alloc[a] = malloc(sizeof(int) * width);

		if (alloc[a] == NULL)
		{
			for (; a >= 0; a--)
				free(alloc[a]);

			free(alloc);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			alloc[a][b] = 0;
	}

	return (alloc);
}
