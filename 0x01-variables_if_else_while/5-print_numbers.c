#include <stdio.h>

/**
 * main - prints 0 through 9
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar(10);

	return (0);
}
