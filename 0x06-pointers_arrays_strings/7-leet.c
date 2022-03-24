#include "main.h"

/**
 * leet - a function that encodes a string in 1337
 * @s: string
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, j;

	char *first = "aAeEoOtTlL";
	char *second = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == first[j])
			{
				s[i] = second[j];
			}
		}
	}

	return (s);
}
