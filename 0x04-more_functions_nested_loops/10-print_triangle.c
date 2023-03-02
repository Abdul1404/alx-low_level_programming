#include "main.h"
/**
  * print_triangle - function that prints triangles with '#'
  *
  * @n: size of the triangle
  *
  * Return: 0
  *
  */
void print_triangle(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < (n - a); b++)
			{
				_putchar(' ');
			}
			for (b = 0; b < a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (a == 1)
	{
		_putchar('\n');
	}
}
