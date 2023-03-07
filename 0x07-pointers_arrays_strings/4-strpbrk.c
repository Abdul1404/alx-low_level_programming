#include "main.h"
/**
  * _strpbrk - function that searches a string for any char of a set of bytes
  *
  * @s: string to be searched
  * @accept: set of bytes to search for
  *
  * Return: A pointer to the byte in s that matches
  *
  */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *ptr;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				ptr = (s + i);
			}
			else
				ptr = ('\0');
		}
		s++;
	}
	return (ptr);
}
