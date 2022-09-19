#include "main.h"

/**
  *print_rev - check description
  *@s: input character
  *Description - This function prinys the script in reverse
  */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	while (i)
	_putchar(s[--i]);

	_putchar('\n');
}
