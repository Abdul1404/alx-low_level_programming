#include <unistd.h>
#include <stdio.h>

/**
  * main - Check description
  * Description: It prints the word _putchar, followed by a new line.
  * Return: 0.
  */
int main(void)
{
	const char *word = "_putchar";

	fprintf(stderr, "%c\n", *word);
	return (0);
}
