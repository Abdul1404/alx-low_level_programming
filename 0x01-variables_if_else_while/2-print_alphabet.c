#include <stdio.h>
/**
  * main - function that prints the alphabets in lower case with putchar
  *
  * Return: 0
  *
  */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
