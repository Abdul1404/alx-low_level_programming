#include "main.h"
/**
  * print_rev - function that prints a string in reverse
  *
  * @s: string to be printed in reverse
  *
  * Return: void
  *
  */
void print_rev(char *s)
{
	int len, rev;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (rev = (len - 1); rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}

	_putchar('\n');
}
