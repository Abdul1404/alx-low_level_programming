#include <stdio.h>
#include "main.h"

/**
  *main - check code
  *Description - print the alphabets a-z
  *Return - 0
  */

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
	return (0);
}
