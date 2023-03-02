#include "main.h"
/**
  * more_numbers - function that print 0-14 10 times
  *
  * Return: void
  *
  */
void more_numbers(void)
{
	int step;
	int num;

	for (step = 0; step <= 9; step++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
