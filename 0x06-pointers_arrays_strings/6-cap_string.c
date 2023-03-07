#include "main.h"
/**
  * cap_string - function that capitalizes all the start of a text
  *
  * @s: string
  *
  * Return: capitalised version of the texts
  *
  */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (s[i - 1] == 123 ||
			s[i - 1] == 125 ||
			s[i - 1] == 10 ||
			s[i - 1] == 44 ||
			s[i - 1] == 32 ||
			s[i - 1] == 59 ||
			s[i - 1] == 46 ||
			s[i - 1] == 33 ||
			s[i - 1] == 63 ||
			s[i - 1] == 34 ||
			s[i - 1] == 40 ||
			s[i - 1] == 41 ||
			s[i - 1] == 9 ||
			i == 0)
		{
			s[i] -= 32;
		}

	}
	return (s);
}
