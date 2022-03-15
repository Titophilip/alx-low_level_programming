#include "main.h"
/**
 * print_last_digit - print last
 * digits of a given number n
 *
 * @n - parameter to be tested
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
	{
		c = -c;
	}
	_putchar(c + '0');
	return (c);
}
