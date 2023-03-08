#include "main.h"
/**
  * factorial - function that computes the factorial of a number
  *
  * @n: number to get factorial
  *
  * Return: the factorial of n
  *
  */
int factorial(int n)
{
	if (n != 0)
	{
		if (n < 0)
		{
			return (-1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
	else
	{
		return (1);
	}
}
