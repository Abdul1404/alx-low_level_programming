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
	int a;

	for (a = 0; a < 8; a++)
		_putchar(word[a]);
	_putchar('\n');

	return (0);
}
