#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line, to stdout.
 *
 * @s: string
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;
	i -= 1;
	for (; *(s + (i)); i--)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}
