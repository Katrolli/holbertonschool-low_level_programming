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

	char CH;

	char n = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
		putchar(n);
	return (0);
}
