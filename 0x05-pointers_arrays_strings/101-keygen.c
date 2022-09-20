#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - check description
  *Description - This is a function that generates
  *a random password for 101-crackme
  *Return: 0
  */

int main(void)
{
	int myrand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);
	printf("\n");

	return (0);
}
