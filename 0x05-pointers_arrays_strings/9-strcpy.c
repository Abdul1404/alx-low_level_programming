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
	char *Abdul = dest;

	while (*src != '\0')
		src++;
	*dest++ = *src++;
	return (Abdul);
}
