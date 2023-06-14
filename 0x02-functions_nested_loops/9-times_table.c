#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 *
 */
void times_table(void)
{
	int i, j, result, f_digit, s_digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result > 9)
			{
				f_digit = result / 10 + '0';
				s_digit = result % 10 + '0';
				_putchar(',');
				_putchar(' ');
				_putchar(f_digit);
				_putchar(s_digit);
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
