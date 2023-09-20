#include "main.h"

/**
 * reverse_array - reverse the content of the array
 *
 * @a: parameter 1
 * @n: parameter 2 and number of element in array
 */

void reverse_array(int *a, int n)
{
	int b = 0; /*for the begging position of the array*/
	int e = n - 1; /*for the end of the array before the nullcharacter*/
	int temp; /*for storing the first element for swapping*/

	while (b < e)
	{
		/*Swap the elements at the start and end positions*/
		temp = a[b];
		a[b] = a[e];
		a[e] = temp;

		/*increment*/
		b++;
		/*decrement*/
		e--;
	}
}
