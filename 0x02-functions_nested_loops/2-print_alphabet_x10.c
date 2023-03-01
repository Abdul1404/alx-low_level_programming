#include "main.h"
/**
  * print_alphabet_x10 - function that prints the alphabet 10 times
  *
  * Return: void
  *
  */
void print_alphabet_x10(void)
{
	int time;
	char letter;

	for (time = 0; time <= 9; time++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
