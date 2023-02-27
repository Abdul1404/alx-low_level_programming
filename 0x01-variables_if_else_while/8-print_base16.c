#include <stdio.h>
/**
  * main - function that prints hexa digits in lowercase
  *
  * Return: 0
  *
  */

int main(void)
{
	char hexnum;

	for (hexnum = '0'; hexnum <= '9'; hexnum++)
	{
		putchar(hexnum);
	}
	for (hexnum = 'a'; hexnum <= 'f'; hexnum++)
	{
		putchar(hexnum);
	}
	putchar('\n');
	return (0);
}
