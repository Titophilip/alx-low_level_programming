# include <stdio.h>
/**
 * main - prints the fizzbuzz classification
 *
 * return: nothing
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("fizzbuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
			if (i == 100)
				printf("\n");
			else
				printf(" ");
		}
		else {
			printf("%d ", i);;
		}
	}
}
