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
	(void)height;
	free(*grid);
	free(grid);
}
