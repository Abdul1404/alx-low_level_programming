i#include "main.h"
/**
  *_strlen_recursion - print the length of a string
  *Return: 0
  *@s: string
  */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s == '\0')
		return (0);
	
	c = 1 + _strlen_recursion(s + 1);

	return (c);
}
