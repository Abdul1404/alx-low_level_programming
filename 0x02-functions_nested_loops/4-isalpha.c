#include "main.h"

/**
 * _isalpha - checks for alphabet
 *
 * @c: ascii digit of the letter
 *
 * Return: 1 if c is alphabet, 0 if otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	return (0);
}
