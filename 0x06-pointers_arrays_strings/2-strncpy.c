#include "main.h"

/**
  *_strncpy - a funtion that copies a stting starting from index 0
  *@dest: string
  *@src: string
  *@n: number of chars to copy
  *Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}
