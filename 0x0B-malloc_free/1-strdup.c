#include <stdlib.h>
#include "main.h"

/**
  *_strdup - function that returns a pointer
  *to a newly allocated
  *space in memory that contains a  duplicates of the string
  *@str: string
  *Return: a poonter to the duplicated string or NULL if it fails
  */

char *_strdup(char *str)
{
	int a, b = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		b++;
	dup = malloc(sizeof(char) * (b + 1));

	if (dup == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		dup[a] = str[a];
	dup[b] = '\0';

	return (dup);
}
