#include "main.h"

/**
 * main - prints _putchar to stdout
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;
	char *text = "_putchar";

	for (i = 0; text[i] != '\0'; i++)
		_putchar(text[i]);
	_putchar('\n');

	return (0);
}
