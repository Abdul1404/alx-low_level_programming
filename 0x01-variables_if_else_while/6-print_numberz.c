#include <stdio.h>

/**
 * main - prints 0 through 9
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
		i++;
	}
	putchar(10);

	return (0);
}
