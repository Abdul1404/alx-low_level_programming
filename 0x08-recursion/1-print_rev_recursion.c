#include "main.h"
/**
  * _print_rev_recursion - function that prints a string in reverse using
  *  recursion
  *
  * @s: string to reverse
  *
  * Return: void
  *
  */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(&s[i + 1]);
		_putchar(s[i]);
	}
}
