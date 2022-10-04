#include <stdlib.h>
#include "main.h"

/**
  *free_grid -  function that frees a 2 dimensional grid
  *previously created by your alloc_grid function
  *@grid: integer
  *@height: integer
  *Return: grid
  */
void free_grid(int **grid, int height)
{
	int a;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
