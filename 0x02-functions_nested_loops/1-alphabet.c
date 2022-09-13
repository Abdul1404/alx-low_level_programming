#include <stdio.h>
#include "main.h"

/**
  *main - check code
  *Description - print the alphabets a-z
  *Return - 0
  */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
