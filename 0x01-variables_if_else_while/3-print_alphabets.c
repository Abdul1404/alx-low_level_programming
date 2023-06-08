#include <stdio.h>

/**
 * main - prints a through z then A through Z
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return(0);
}
