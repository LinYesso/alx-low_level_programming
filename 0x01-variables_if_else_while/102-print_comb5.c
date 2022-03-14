#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				rem1 = i % 10;
				rem2 = j % 10;

				div1 = i / 10;
				div2 = j / 10;

				putchar(div1 + 48);
				putchar(rem1 + 48);
				putchar(' ');
				putchar(div2 + 48);
				putchar(rem2 + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
