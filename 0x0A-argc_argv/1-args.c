#include <stdio.h>
/**
  * main - function that prints the number of arguments passed to it
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0
  *
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", (argc - 1));
	return (0);
}
