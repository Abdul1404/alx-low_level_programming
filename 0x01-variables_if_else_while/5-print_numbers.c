#include <stdio.h>
/**
  * main - function that prints all single base 10 digits
  *
  * Return: 0
  *
  */

int main(void)
{
	char number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
