#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, l, l2;

	l = l2 = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	l2 = l - 1;

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l2];
		s[l2] = tmp;
		l2--;
	}
}


