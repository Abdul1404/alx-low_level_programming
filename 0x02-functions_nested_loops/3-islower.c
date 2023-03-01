#include "main.h"
/**
  * _islower - function that checks for lowercase characters
  *
  * @c: character to check
  *
  * Return: 1 if lowercase, 0 if otherwise
  *
  */
int _islower(int c)
{
	int number;

	if (c >= 97 && c <= 122)
		number = 1;
	else
		number = 0;
	return (number);
}
