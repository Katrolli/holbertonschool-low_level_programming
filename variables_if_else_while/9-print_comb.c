#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is the entry point of the program
 * Return: returns 0 if sucess
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
	if (ch < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
