#include <stdio.h>
#include "main.h"
/**
  * times_table - function that prints the 9 times table
  *
  * Return: void
  *
  */
void times_table(void)
{
	int number, times, result;

	for (number = 0; number <= 9; number++)
	{
		for (times = 0; times <= 9; times++)
		{
			result = number * times;
			if (times == 0)
			{
				_putchar('0');
			}
			if (times != 9 && times != 0)
			{
				if (result < 10)
				{
					_putchar(result + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if (result > 10)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
