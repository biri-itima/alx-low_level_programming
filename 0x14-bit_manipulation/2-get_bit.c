#include "main.h"
/**
 * get_bit - returns the value of bit at the index
 * @n: parameter 1
 * @index: index to get bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n & m) ? 1 : 0);
}
