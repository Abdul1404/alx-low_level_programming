#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: integer
 *
 * Return: value of the last digit of n
 *
 */
int print_last_digit(int n)
{
	int l_digit;

	l_digit = n % 10;

	if (n < 0)
		l_digit *= -1;
	_putchar(l_digit + '0');

	return (l_digit);
}
