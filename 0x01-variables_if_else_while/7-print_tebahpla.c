#include <stdio.h>
/**
  * main - function that prints alphabets in reverse order
  *
  * Return: 0
  *
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		letter++;
	}
	letter -= 1;
	while (letter >= 'a')
	{
		putchar(letter);
		--letter;
	}
	putchar('\n');
	return (0);
}
