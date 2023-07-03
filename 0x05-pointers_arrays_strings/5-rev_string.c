#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; *(s + i); i++)
		;
	for (j = 0; j < (i / 2); j++)
	{
		tmp = *(s + j);
		*(s + j) = *(s + (i - j - 1));
		*(s + (i - j - 1)) = tmp;
	}
}
