#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  *
  * @n: number to check
  *
  * Return: the last digit
  *
  */
int print_last_digit(int n)
{
	int number;

	number = n % 10;
	if (n < 0)
		number *= -1;
	number *= 1;
	_putchar(number + '0');
	return (number);
}
