#include "main.h"

/**
 * rot13 - a function that encodes a string in rot13
 * @s: string
 *
 * Return: a string
 */
char *rot13(char *s)
{
	int i, j;

	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char second[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; first[j] != '\0'; j++)
		{
			if (s[i] == first[j])
			{
				s[i] = second[j];
				break;
			}
		}
	}
	return (s);
}
