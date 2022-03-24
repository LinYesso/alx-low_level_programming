#include "main.h"

/**
 * reverse_array - a function that reverses an array of integers
 * @a: array
 * @n: number
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;
	
	i = 0;
	j = n - 1;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
		i++;
	}
}
