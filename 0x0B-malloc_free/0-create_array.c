#include <stdlib.h>
#include "main.h"

/**
  *create_array - function tgat creates an array of chars and 
  *initializes it with a specific char.
  *@size: integer
  *@c: character
  *Return: a pointer to the array or Null if it fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *pointer;

	if (size == 0)
		return (NULL);
	pointer = malloc(size * sizeof(c));

	if (pointer == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		return (pointer[a]);
}
