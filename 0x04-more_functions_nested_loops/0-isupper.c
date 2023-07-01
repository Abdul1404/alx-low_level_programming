#include "main.h"

/**
 * _isupper - chevks for uppercase chars
 *
 * @c: ascii of the letter to check
 *
 * Return: 1 if uppercase l, 0 if otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
