#include "main.h"
/**
  * main - fizzbuzz test
  *
  * Return: 0
  *
  */
int main(void)
{
	int num;

	for (num = 1; num <= 99; num++)
	{
		if ((num % 5 == 0) && (num % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			if (num % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (num % 3 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%d ", num);
			}
		}
	}
	printf("Buzz\n");
	return (0);
}
