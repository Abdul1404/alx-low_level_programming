#include "main.h"

/*
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
	i -= 1;
	for (j = 0; j < (i / 2); j++)
	{
		tmp = *(s + j);
		*(s + j) = *(s + (i - j));
		*(s + (i - j)) = tmp;
	}
}
