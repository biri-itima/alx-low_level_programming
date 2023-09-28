#include "main.h"

/**
 * is_prime_number - return 1 if it is a prime number
 *
 * @n: parameter
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n == 1 || n < 0 || n % 5 == 0)
	{
		return (0);
	}
	else
		return (1);
}
