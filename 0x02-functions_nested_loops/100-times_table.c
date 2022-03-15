#include "main.h"
/**
 *times_table - 9 times table
 *
 * @n: Number to be multiplied up to.
 *
 *Return: no return value
 *
 */
void print_times_table(int n)
{
	int i, j, product;
	if (n < 0 || n > 15)
	{
		return (0);
	} else {
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				product = i * j;
				if (j == 0)
				{
					_putchar('0' + product);
				}
				else if (product >= 10)
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				if (j != 9)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
