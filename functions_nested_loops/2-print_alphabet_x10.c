#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - main func
 * Return: returns 0 if sucess
 */
void print_alphabet_x10(void)
{
	int letter;
	int _10x;

	for (_10x = 0; _10x <= 9; _10x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
