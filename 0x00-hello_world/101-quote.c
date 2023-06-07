#include <unistd.h>
#include <string.h>

/**
 * main - Prints a text to stdout
 *
 * Return: 0
 *
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(quote);

	write(STDERR_FILENO, quote, len);
	return (0);
}
