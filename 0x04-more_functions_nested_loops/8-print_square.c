#include "main.h"

/**
 * print_square - prints a square
 *
 * @n: number of times to print
 *
 * Return: void
 *
 */
void print_square(int n)
{
	int j, k;

	if (!(n <= 0))
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
