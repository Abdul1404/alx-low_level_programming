#include "main.h"

/*
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @s: string
 *
 * Return: void
 *
 */
void puts2(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) % 2 == 0)
			_putchar(*(s + i));
	}
	_putchar(10);
}
