#include "main.h"

/**
 * more_numbers - prints 0-9
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int j;

	for (j = 0; j < 14; j++)
	{
		int i = 48;
		while (i < 58)
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
	}
}
