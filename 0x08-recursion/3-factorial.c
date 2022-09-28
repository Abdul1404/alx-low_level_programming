#include "main.h"
/**
  *factorial - calculates the factorial of n
  *@n: number
  *Return: c
  */
int factorial(int n)
{
	int c = 1;

	if (n < 0)
		return (-1);

	c = factorial(1);

	return (n * (n - 1));
}
