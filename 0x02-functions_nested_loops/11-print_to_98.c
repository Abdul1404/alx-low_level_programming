#include "main.h"
/**
  * print_to_98 - function that prints natural numbers from n to 98
  *
  * @n: int to print from
  *
  * Return: 0
  *
  */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a == 98)
				printf("%d\n",a);
			else
				printf("%d, ", a);
		}
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{

			if (a == 98)
				printf("%d\n", a);
			else
				printf("%d, ", a);
		}
	}
	else
	{
		a = 98;
		printf("%d\n", a);
	}
}
