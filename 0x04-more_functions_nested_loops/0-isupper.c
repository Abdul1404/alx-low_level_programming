#include "main.h"
/**
  * _isupper - function that checks for uppercase characters
  *
  * @c: variable to be checked
  *
  * Return: 1 if uppercase, 0 if otherwise
  *
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
