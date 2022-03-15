#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - natural numbers from n to 98.
 
 *@n: input.
 *
 *Return: void.
 *
 */
void print_to_98(int n)
{
	int j;
	
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (j = n; j <= 98; j++)
		{
			if (j == 98)
			{
				printf("%d\n", j);
			}
			else
			{
				printf("%d, ", j);
			}
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j == 98)
			{
				printf("%d\n", j);
			}
			else
			{
				printf("%d, ", j);
			}
		}
	}
}
