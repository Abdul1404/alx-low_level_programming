#include "main.h"

/**
  *_strlen - chwvk description
  *@string: input character
  *Description - This is a function tgat prints the length of a string
  *Return: 0
  */

int _strlen(char *string)
{
	int length = 0;

	while (string[length] != '\0')
		length++;

	return (length);
}
