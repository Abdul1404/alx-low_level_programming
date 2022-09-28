#include "main.h"

/**
  *_print_rev_recursion - print tge reverse of a string
  *@s: string
  */

void _print_rev_recursion(char *s)
{
	int a = 0;

	if (*s == s[a])
		_putchar('\n');
	else
	{
		_putchar(*s);
		_print_rev_recursion(--s);
	}
}
