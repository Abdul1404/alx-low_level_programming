#include "main.h"

/*
 * print_array - prints array
 *
 * @n: int
 *
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; ((i < n) && (*(a + i))); i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d\n", *(a + i));
	}
}
