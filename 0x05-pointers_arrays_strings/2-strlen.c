#include "main.h"
/**
  * _strlen - funtion that returns the length of a string
  *
  * @s: string whose length should be returned
  *
  * Return: int
  *
  */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}
