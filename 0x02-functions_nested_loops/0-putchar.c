#include <stdio.h>
#include "_putchar.h"
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
		putchar(word[a]);
	 putchar('\n');

	return (0);
}
