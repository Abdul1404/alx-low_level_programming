#include "main.h"
/**
  * rev_string - function that reverses a string
  *
  * @s: string to be reversed
  *
  * Return: void
  *
  */
void rev_string(char *s)
{
	int half, len, n;
	char temp;

	for (len = 0; s[len]; len++)
		;
	half = len / 2;
	n = 0;
	while (half--)
	{
		temp = s[n];
		s[n] = s[len - n - 1];
		s[len - n - 1] = temp;
		n++;
	}
}
