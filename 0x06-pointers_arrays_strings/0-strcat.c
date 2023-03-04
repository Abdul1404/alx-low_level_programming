#include "main.h"
/**
  * _strcat - function that concatenates two string
  *
  * @dest: first string
  * @src: second strings
  *
  * Return: dest
  *
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
