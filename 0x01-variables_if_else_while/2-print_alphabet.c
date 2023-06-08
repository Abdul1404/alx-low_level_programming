#include <stdio.h>

/**
 * main - prints a through z
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return(0);
}
