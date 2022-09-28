#include "main.h"
/**
  *_pow_recursion - rases x to tge power of x
  *@x: variable to raise
  *@y: variable to be raised to
  *Return: p
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
