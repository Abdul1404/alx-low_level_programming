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

	while (i < 123)
	{
		if (i != 101 && i != 113)
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
