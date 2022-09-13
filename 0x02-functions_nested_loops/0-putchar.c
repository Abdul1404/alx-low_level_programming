#include <unistd.h>
#include "main.h"

/**
  * main - Check description
  * Description: It prints the word Holberton, followed by a new line.
  * Return: 0.
  */
int main(void)
{
	char word = "_putchar";
		
	while (word)
	{	
		putchar(word);
		word++;
	}
	putchar('\n');

	return (0);
}
