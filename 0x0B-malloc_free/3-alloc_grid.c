#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array 
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int h_i, w_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (h_i = 0; h_i < height; h_i++)
	{
		twoD[h_i] = malloc(sizeof(int) * width);

		if (twoD[h_i] == NULL)
		{
			for (; h_i >= 0; h_i--)
				free(twoD[h_i]);

			free(twoD);
			return (NULL);
		}
	}

	for (h_i = 0; h_i < height; h_i++)
	{
		for (w_i = 0; w_i < width; w_i++)
			twoD[h_i][w_i] = 0;
	}

	return (twoD);
}
