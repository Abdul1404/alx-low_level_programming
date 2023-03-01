#include "main.h"
/**
  * _isalpha - function that checks for alphabetic characters
  *
  * @c: character to check
  *
  * Return: 1 if it is a letter, 0 if otherwise
  *
  */
int _isalpha(int c)
{
	int number;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		number = 1;
	else
		number = 0;
	return (number);
}
