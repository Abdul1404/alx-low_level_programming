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
	int i;

	for (i = 0; i < 50; i++)
	{
		next = a + b;
		if (i != 49)
			printf("%ld, ", next);
		else
			printf("%ld\n", next);

		a = b;
		b = next;
	}

	return (0);
}
