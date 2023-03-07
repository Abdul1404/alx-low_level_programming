#include "main.h"
/**
  * _strchr - function that locates a character in a string
  *
  * @s: string to be checked
  * @c: character to locate
  *
  * Return: A pointer to the firt occurrence of the character
  *
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
