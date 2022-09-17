#include "main.h"

/**
  *print_times_table - check description
  *@n: input integer
  *Return: Nothing
  *Description - This is a function that prints 14 times table
  */

void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= 14; a++)
	{
		_putchar('0');
	for (b = 1; b = 14; b++)
	{
		_putchar(",");
		_putchar(" ");

	c = a * b;

	if (c <= 14)
		_putchar(" ");
	else
		_putchar((prod / 10) + '0');
		_putchar((prod % 10) + '0');
	}

	_putchar("\n");
	}
}
