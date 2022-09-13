#include "main.h"
/**
  *Entry point - main
  *
  *Return - 0
  *Description - This program prints _putchar fillowed by a new line
  */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
