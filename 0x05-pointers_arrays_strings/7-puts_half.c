#include "main.h"
/**
  * puts_half - prints half of a string followed by a new line
  *
  * @s: string to print
  *
  * Return: void
  *
  */
void puts_half(char *s)
{
	int len, half;

	for (len = 0; s[len]; len++)
		;
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len - 1) / 2;
	}
	for (; half <= (len - 1); half++)
	{
		_putchar(s[half]);
	}
	_putchar('\n');
}
