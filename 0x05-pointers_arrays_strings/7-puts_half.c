#include "main.h"

/**
 * puts_half - prints a string, followed by a new line, to stdout.
 *
 * @s: string
 *
 * Return: void
 *
 */
void puts_half(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;
	if (i % 2 == 0)
		i /= 2;
	else
	{
		i += 1;
		i /= 2;
	}
	for (; *(s + i); i++)
		_putchar(*(s + i));
	_putchar(10);
}
