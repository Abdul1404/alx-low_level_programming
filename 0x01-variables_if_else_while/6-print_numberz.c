#include <stdio.h>
/**
  * main - function that prints single digits of base 10 without using a
  *			variable of type char
  *
  * Return: 0
  *
  */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar(10);
	return (0);
}
