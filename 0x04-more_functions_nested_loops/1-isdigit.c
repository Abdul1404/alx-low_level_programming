#include "main.h"

/**
 * _isdigit - checks for digits
 *
 * @c: ascii of the letter to check
 *
 * Return: 1 if uppercase l, 0 if otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
