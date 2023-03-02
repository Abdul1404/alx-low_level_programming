#include "main.h"
/**
  * print_square - function that prints a square
  *
  * @n: size of square
  *
  * Return: void
  *
  */
void print_square(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
