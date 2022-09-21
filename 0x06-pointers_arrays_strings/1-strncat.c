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

	while (dest[i++])
	d++;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[d++] = src[i];
	}
	return (dest);
}
