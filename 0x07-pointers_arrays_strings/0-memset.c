#include "main.h"

/**
  *_memset - function that fills memory with a constant byte
  *@b:constant byte
  *@s:array
  *@n:number of bytes to fill bytes
  *Return: Always 0
  */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}

	return (s);
}
