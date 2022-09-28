#include "main.h"
/**
  *factorial - calculates the factorial of n
  *@n: number
  *Return: c
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
