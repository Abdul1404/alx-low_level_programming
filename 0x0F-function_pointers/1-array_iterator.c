#include "function_pointers.h"

/**
  *array_iterator - executes a function given as parameter on
  *			each element
  *@array: array
  *@size: suze of array
  *@action: pointer to function to execute
  *
  *Return: nothing
  **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action && array)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
