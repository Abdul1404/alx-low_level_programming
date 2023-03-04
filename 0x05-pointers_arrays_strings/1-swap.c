#include "main.h"
/**
  * swap_int - function that swaps the vlue of two integers
  *
  * @a: arg 1
  * @b: arg 2
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
