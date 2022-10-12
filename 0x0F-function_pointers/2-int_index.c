#include "function_pointers.h"

/**
  *int_index - function that searches for an integer
  *@array: array
  *@size: size of array
  *@cmp: pointer to function
  *
  *Return: index of tge first element ||  -1 if size<= 0
  **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size > 0 && array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			b = cmp(array[a]);
			if (b)
				break;
		}
		if (a < size)
			return (a);
	}
	return (-1);
}
