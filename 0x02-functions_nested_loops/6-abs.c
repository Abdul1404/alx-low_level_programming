#include "main.h"
/**
  * _abs - function that computes the absolute value of an integer
  *
  * @n: integer to check
  *
  * Return: 0
  *
  */
int _abs(int n)
{
	int number;

	if (n < 0)
		number = n * -1;
	else
		number = n * 1;
	return (number);
}
