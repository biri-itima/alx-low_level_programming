#include "main.h"
/**
 * main - print Fizz & Buzz in multiples of 3 and 5 respectively
 * Return: (0) successfully
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", a);
		if (a == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
