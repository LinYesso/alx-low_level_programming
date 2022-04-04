#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char
 *
 * Return: pointer to the array, NULL (fail)
 */
char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	pt = (char *) malloc(sizeof(char) * size);

	if (pt == NULL)
		return (0);

	while (i < size)
	{
		*(pt + i) = c;
		i++;
	}
	*(pt + i) = '\0';

	return (pt);
}
