#include "main.h"

/**
  *_strchr - function thta locates a string
  *@s: string
  *@c: character
  *Return: s or s+1
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
