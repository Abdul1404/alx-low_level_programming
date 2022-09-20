#include "main.h"
/**
  * puts2 - vheck description
  * @str: input
  *Description -
  */

void puts2(char *str)
{
	int Abdul;

	for (Abdul = 0; str[Abdul] != '\0';  Abdul++)
	{
		if (Abdul % 2 == 0)
			_putchar(str[Abdul]);
	}

	_putchar('\n');
}
