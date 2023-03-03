#include "main.h"
/**
  * _puts - function that prints a string followed by a new line
  *
  * @s: string to print
  *
  * Return: void
  *
  */
void _puts(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
