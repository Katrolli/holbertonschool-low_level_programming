#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - main func
 * Return: returns 0 if sucess
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
			_putchar('\n');
}
