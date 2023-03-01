#include "main.h"
/**
  * print_sign - function that prints the sign of a number(+ or -)
  *
  * @n: number to check
  *
  * Return: 1 if positive, -1 if negative, 0 if otherwise.
  *
  */
int print_sign(int n)
{
	int number;

	if (n > 0)
	{
		number = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		number = -1;
		_putchar('-');
	}
	else
	{
		number = 0;
		_putchar('0');
	}
	return (number);
}
