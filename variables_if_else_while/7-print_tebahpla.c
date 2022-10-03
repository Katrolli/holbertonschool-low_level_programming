#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is the entry point of the program
 * Return: returns 0 if sucess
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
