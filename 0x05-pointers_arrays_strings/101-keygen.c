#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
	char random;
	int s;

	srand(time(0));
	while (s <= 2645)
	{
		random = rand() % 128;
		s = s + random;
		putchar(random);
	}
	putchar(2772 - s);
	return (0);
}
