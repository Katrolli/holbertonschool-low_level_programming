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
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(doubleType));
	printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));

	return (0);
}
