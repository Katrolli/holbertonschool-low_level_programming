#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	float floatType;
	double doubleType;
	/* sizeof returns size of variable */
	printf("Size of int : %zu bytes\n", sizeof(intType));
	printf("Size of char : %zu bytes\n", sizeof(charType));
	printf("Size of float : %zu bytes\n", sizeof(floatType));
	printf("Size of double : %zu bytes\n", sizeof(doubleType));

	return (0);
}
