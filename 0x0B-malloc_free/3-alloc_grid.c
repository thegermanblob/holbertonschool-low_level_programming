#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Allocates a 2d array
 * @width: how wide
 * @height: how tall
 * Return: array or null
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int w, h, i;

	if (width == 0 || height ==0 )
		return(NULL);
	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
			return (NULL);
	}
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			g[h][w] = 0;
			w++;
		}
		h++;
	}
	return (g);
}
