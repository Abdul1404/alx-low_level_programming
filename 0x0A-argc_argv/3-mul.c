#include <stdlib.h>
#include <stdio.h>
/**
  * main - function that returns product of argv[2] and argv[3]
  *
  * @argc: argumnet count
  * @argv: argument vector
  *
  * Return: 0
  *
  */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = 1;

		for (j = 1; j < argc; j++)
		{
			i *= atoi(argv[j]);
		}
		printf("%d\n", i);
		return (0);
	}
}
