#include "main.h"

/**
  * reset_to_98 - function
  * Description - This is a function that takes a pointer to an int as
  *parameter and updates the value it points to to 98
  * Return: Nothing
  */

void reset_to_98(void)
{
	int a = 98;
	int *n = &a;
		_putchar(*n);
	_putchar("\n");
}
