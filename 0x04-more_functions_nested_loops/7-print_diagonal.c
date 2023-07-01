#include "main.h"

/**
 * print_diagonal - prints \ n times
 *
 * @n: number of times to print
 *
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int j;

	if (!(n <= 0))
	{
		for (j = 0; j < n; j++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
