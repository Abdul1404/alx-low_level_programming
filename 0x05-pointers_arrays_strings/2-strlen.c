#include "main.h"

/*
 * _strlen - function that returns the length of a string.
 *
 * @s: string
 *
 * Return: int
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;

	return (i);
}
