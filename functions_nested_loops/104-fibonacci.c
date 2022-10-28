#include <stdio.h>
/**
 * main - this is the entry point of the program
 * Return: returns 0 if sucess
 */



int main(void)
{
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long tmp;
	unsigned long leftn1, rightn1, leftn2, rightn2;
	unsigned long lefttmp, righttmp;
	unsigned long billion = 1000000000;
	int i;

	printf("%lu, ", n1);
	printf("%lu, ", n2);
	for (i = 0; i < 90; i++)
	{
		tmp = n1 + n2;
		n1 = n2;
		n2 = tmp;
		printf("%lu, ", tmp);
	}
	leftn1 = (n1 / billion);
	rightn1 = (n1 % billion);
	leftn2 = (n2 / billion);
	rightn2 = (n2 % billion);
	for (i = 0; i <= 5; i++)
	{
		lefttmp = leftn1 + leftn2;
		righttmp = rightn1 + rightn2;
		leftn1 = leftn2;
		rightn1 = rightn2;
		leftn2 = lefttmp;
		rightn2 = righttmp;
		printf("%lu", lefttmp + (righttmp / billion));
		printf("%lu", righttmp % billion);
		if (i != 5)
			printf(", ");
	}
	printf("\n");
	return (0);
}
