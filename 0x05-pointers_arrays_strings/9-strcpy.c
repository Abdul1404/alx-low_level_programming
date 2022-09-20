#include "main.h"

/**
  *_strcpy - check description
  * @dest: input character
  *@src: input character
  *description
  *Return: Always 0
  */

char *_strcpy(char *dest, char *src)
{
	int Abdul;

	for (Abdul = 0; src[Abdul] != '\0'; Abdul++)
	{
		dest[Abdul] = src[Abdul];
	}
	dest[Abdul] = '\0';

	return (dest);
}
