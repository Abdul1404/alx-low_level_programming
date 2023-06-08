#include <stdio.h>

/**
 * main - prints alphabet in reverse(z-a)
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return(0);
}
