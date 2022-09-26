#include "main.h"

/**
  *_memcpy - a function that copies memory area
  *@dest:char array to copy into
  *@src: char array to copy from
  *@n: number of elemenys to copy
  *Return: a
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a;

	a = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (a);
}
