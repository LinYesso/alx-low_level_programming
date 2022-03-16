#include "main.h"

/**
 * print_last_digit - prints the last digit of the input 
 * @n: number to be computed
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last = n % 10;
	
	if (n < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}
