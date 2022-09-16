#include <stdio.h>
#include "main.h"
/**
  *main - entry level
  *Return: 0
  *Description - This program prints _putchar fillowed by a new line
  */

int main(void)
{
	char *word = "_putchar\n";
	int a;

	for (a = 0; word[a] != '\0'; a++)
		_putchar(word[a]);
	return (0);
}
