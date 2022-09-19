#include "main.h"

/**
  *swap_int - check description
  *@a: inout integer
  *@b: input integer
  *Description - function that swaps *a to *b
  */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
