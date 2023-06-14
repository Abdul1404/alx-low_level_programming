#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: intger
 *
 * Return: absolute value of i
 *
 */
int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
