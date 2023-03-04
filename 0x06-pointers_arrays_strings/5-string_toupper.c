#include "main.h"
/**
  * string_toupper - function that changes all lowercase characters to upper
  *
  * @s: string to change
  *
  * Return: uppercase version of the string\
  *
  */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] -= 32;
		}
	}
	return (s);
}
