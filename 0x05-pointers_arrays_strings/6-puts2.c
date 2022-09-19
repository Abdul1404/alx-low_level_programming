#include "main.h"
/**
  * puts2 - vheck description
  * @str: input
  *Description -
  */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	i -= 1;

	for (j == i; j += 2;)
		_putchar(str[j]);

	_putchar('\n');
}
