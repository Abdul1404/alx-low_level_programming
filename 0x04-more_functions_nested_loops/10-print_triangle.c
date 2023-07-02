#include "main.h"

/**
 * print_triangle - prints \ n times
 *
 * @n: number of times to print
 *
 * Return: void
 *
 */
void print_triangle(int n)
{
	int j, k, l;

	if (!(n <= 0))
	{
		for (j = 0; j < n; j++)
		{
			if (n > 1)
			{
				for (k = 1; k <= n - j; k++)
				{
					_putchar(' ');
				}
				for (l = 1; l <= j; l++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
