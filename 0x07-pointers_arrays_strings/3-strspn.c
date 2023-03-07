#include "main.h"
/**
  * _strspn - function that gets the length of a prefix substring
  *
  * @s: string
  * @accept: bytes to check
  *
  * Return: unsigned int
  *
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				k++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
