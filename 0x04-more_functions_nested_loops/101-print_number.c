#include "main.h"

/**
  *print_numbers - display digits
  *@n: input integer
  *Return: nothing
  */

void print_numbers(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
	_putchar('-');
	x = -x;
	}
	if ((x / 10) > 0)
		print_numbers(x / 10);
					_putchar((x % 10) + '0');
}
