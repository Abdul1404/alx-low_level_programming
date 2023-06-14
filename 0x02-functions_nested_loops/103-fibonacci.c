#include "main.h"

/**
 * main - prints fibonacci
 *
 * Return: void
 *
 */
int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int next;
	unsigned long int sum = 0;
	int i;

	for (i = 0; i < 50; i++)
	{
		next = a + b;
		if (next < 4000000)
		{
			if (next % 2 == 0)
				sum += next;
		}

		a = b;
		b = next;
	}
	printf("%ld\n", sum);

	return (0);
}
