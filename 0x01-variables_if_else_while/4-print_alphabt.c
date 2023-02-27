#include <stdio.h>
/**
  * main - functon that prints the alphabet in lowercase without the leters
  *			e and q
  *
  * Return: 0
  *
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter += 1;
	}
	putchar('\n');
	return (0);
}
