#include "main.h"
/**
  *_strncat - check description
  *@dest: charcter string
  *@src: charactwr atring
  *@n: number
  *Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, d;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (d = 0; src[d] != '\0' && n > 0; d++, n--, i++)
	{
		dest[i] = src[d];
	}
	return (dest);
}
