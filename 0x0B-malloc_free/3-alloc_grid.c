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
	if (p == NULL || p2 == NULL)
		return (NULL);

	x = 0;
	for (i = 0; i < width * height; i++)
	{
		p[i] = 0;
	}
	for (i = 0; i < height; i++)
	{
		p2[i] = &p[x];
		x += width;
	}
	return (p2);
}