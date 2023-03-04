#include "main.h"
/**
  * _strncat - function that concatenates two strings
  *
  * @n: number of bytes to concatenate
  * @dest: first string
  * @src: second string
  *
  * Return: dest
  *
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; ((j < n) && (src[j])); i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
