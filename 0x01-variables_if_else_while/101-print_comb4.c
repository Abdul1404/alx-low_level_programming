#include <stdio.h>

/**
 * main - prints all posiible combinations of 3 digit numbers from 0-9
 *
 * Return: 0
 *
 */
int main(void)
{
	int i, j, k;

	for (k = 0; k <= 9; k++)
	{
		for (i = k + 1; i <= 9; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
				putchar(k + '0');
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9 || k != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);

	return (0);
}
