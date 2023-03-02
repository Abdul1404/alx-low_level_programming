#include "main.h"
/**
  * print_most_numbers - function that prints 0-9 without 2 and 4
  *
  * Return: void
  *
  */
void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
