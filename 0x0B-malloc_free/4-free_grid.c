#include <stddef.h>
#include <stdlib.h>
/**
* free_grid - check if charcter is an alphabet
* @grid : pointer argument
* @height : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
		free(grid[i]);

	free(grid);
}
