#include <stdio.h>
#include "main.h"
/**
  * print_array - function that prints an array of integers
  *
  * @a: array of integers
  * @n: number of elements to print
  *
  * Return: void
  *
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
