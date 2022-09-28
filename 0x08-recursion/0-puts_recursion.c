#include "main.h"
/**
  *_puts_recursion - function
  *@s: string
  *Deacription - This is a function that prints a string
  *Return: void
  */
void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
