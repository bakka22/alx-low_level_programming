#include <stddef.h>
#include <stdlib.h>
/**
* alloc_grid - check if charcter is an alphabet
* @width : pointer argument
* @height : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int **alloc_grid(int width, int height)
{
	int i, x;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	x = 0;
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (x = i; x >= 0; x--)
				free(p[x]);

			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		{
			p[i][x] = 0;
		}
	}
	return (p);
}
