#include <stdio.h>

/**
 * main - prints all posiible combinations of 3 digit numbers from 0-9
 *
 * Return: 0
 *
 */
int main(void)
{
	int i, j, first_num, second_num, third_num, fourth_num;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			first_num = i / 10 + '0';
			second_num = i % 10 + '0';
			third_num = j / 10 + '0';
			fourth_num = j % 10 + '0';

			putchar(first_num);
			putchar(second_num);
			putchar(' ');
			putchar(third_num);
			putchar(fourth_num);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);

	return (0);
}
