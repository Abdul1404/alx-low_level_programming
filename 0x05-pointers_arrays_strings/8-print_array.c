#include "main.h"
#include <stdio.h>
/**
  *print_array - check description
  *@a: input integer
  *@n: input integer
  *Description -
  */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		printf(", ");
	}
	_putchar('\n');
}