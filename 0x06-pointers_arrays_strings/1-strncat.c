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
	int i = 0;
	int d = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (d = 0; src[d] != '\0' && n > 0; d++ n--)
	{
		dest[i] = src[d];
	}
	return (dest);
}
