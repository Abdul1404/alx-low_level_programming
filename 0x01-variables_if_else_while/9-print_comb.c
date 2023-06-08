#include <stdio.h>

/**
 * main - prints all posiible combinations of single digit numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar(10);

	return (0);
}
