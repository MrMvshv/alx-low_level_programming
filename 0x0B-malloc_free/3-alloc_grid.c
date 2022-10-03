#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D int array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer 2 2D array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc((sizeof(int *) * height));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc((sizeof(int) * width));
		if (arr[i] == NULL)
		{
			j = i;
			while (j >= 0)
			{
				free(arr[j]);
				j--;
			}
			free(arr);
			return (NULL);
		}

		for (k = 0; k < width; k++)
			arr[i][k] = 0;
	}
	return (arr);
}
