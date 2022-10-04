#include <stdlib.h>
#include "main.h"
/**
  *str_concat - concatenates two strings
  *@s1: first string
  *@s2: second string
  *Return: Null.on failure
  */
char *str_concat(char *s1, char *s2)
{
	int a, b = 0, c = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] || s2[a]; a++)
		c++;
	str = malloc(sizeof(char) * c);
	if (str == NULL)
		str = "";
	for (a = 0; s1[a]; a++)
		str[b++] = s1[a];
	for (a = 0; s2[a]; a++)
		str[b++] = s2[a];
	return (str);
}
