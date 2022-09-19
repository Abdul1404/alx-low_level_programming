#include "main.h"

/**
  * rev_string - check description
  * @s: input integer
  * Description
  */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char k;

	while (s[i] != '\0')
		i++;
	while (j < i--)
	{
		k = s[j];
		s[j++] =  s[i];
		s[i] = k;
	}
}
