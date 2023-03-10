#include <stdio.h>
/**
  * main - function that prints all arguments passed to it
  *
  * @argc: argument count
  * @argv: argumnet vector
  *
  * Return: 0
  *
  */
int main (int argc, char *argv[])
{
	int i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
