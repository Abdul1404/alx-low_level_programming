#include <stdio.h>
/**
  * main - functin that prints all possible combinations of single digits
  *
  * Return: 0
  *
  */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
