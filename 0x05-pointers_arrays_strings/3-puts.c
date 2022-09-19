#include "main.h"
#include <stdio.h>

/**
  *_puts - check description
  *@str: input character
  *Description - This is a function that prints a string followed by a new line
  *Return: Nothing
  */

void _puts(char *str)
{
	int string = 0;

	while (str[string] != '\0')
		_puts(str);
}
