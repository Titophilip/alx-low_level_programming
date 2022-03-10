#include <stdio.h>
/**
 * main - prints the size of variou data type
 * Return:0 when code runs perfectly
 */
int main(void)
{
	char charType;
	int intType;
	long int liType;
	long long int lliType;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(liType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lliType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
