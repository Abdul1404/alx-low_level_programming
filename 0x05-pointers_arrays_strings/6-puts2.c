#include "main.h"
/**
  * puts2 - function that prints every other character of a string,
  *			starting with the first character
  *
  * @s: string to print
  *
  * Return: void
  *
  */
void puts2(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
	{
		if (s[len] % 2 == 0)
		{
			_putchar(s[len]);
		}
	}
	_putchar('\n');
}
