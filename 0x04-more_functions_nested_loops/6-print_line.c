#include "main.h"
/**
  * print_line - function that prints a line on the terminal with '_'
  *
  * @n: number of '_' to print
  *
  * Return: void
  *
  */
void print_line(int n)
{
	int a;

	if (n < 0 || n == 0)
		_putchar('\n');
	else
	{
		for (a = n; a >= 1; a--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
