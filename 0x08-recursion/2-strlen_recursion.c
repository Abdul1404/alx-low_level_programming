#include "main.h"
/**
  * _strlen_recursion - function that returns the lengthb of a string
  *
  * @s: string
  *
  * Return: number of chars in the string
  *
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[len] != '\0')
	{
		len++;
		len += _strlen_recursion(&s[len + 1]);
	}
	return (len);
}
