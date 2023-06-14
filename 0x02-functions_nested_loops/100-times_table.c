#include "main.h"

/**
 * print_times_table - prints 9 times table
 *
 * @n: int
 *
 * Return: void
 *
 */
void print_times_table(int n)
{
	int i, j, result, f_digit, s_digit, t_digit;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result > 9 && result < 100)
				{
					f_digit = result / 10 + '0';
					s_digit = result % 10 + '0';
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(f_digit);
					_putchar(s_digit);
				}
				else if (result > 99)
				{
					f_digit = result / 100 + '0';
					s_digit = ((result / 10) % 10) + '0';
					t_digit = result % 10 + '0';
					_putchar(',');
					_putchar(' ');
					_putchar(f_digit);
					_putchar(s_digit);
					_putchar(t_digit);
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(result + '0');
				}
			}
			_putchar('\n');
		}
	}
}
