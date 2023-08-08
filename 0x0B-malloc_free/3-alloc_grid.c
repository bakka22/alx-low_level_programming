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
	int *p, **p2;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int) * width * height);
	p2 = malloc(sizeof(p) * height);
	if (p == NULL)
	{
		if (p2 != NULL)
			free(p2);
		return (NULL);
	}
	if (p2 == NULL)
	{
		free(p);
		return (NULL);
	}

	x = 0;
	for (i = 0; i < height; i++)
	{
		p2[i] = &p[x];
		x += width;
	}
	free(p);
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		{
			p2[i][x] = 0;
		}
	}
	return (p2);
}
