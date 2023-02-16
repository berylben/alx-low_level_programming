/**
 * main - starting point
 *
 * a program to display sizepf various types
 * Return: 0 
 */
#include <stdio.h>

int main(void)
{
	char charType;
	int intType;
	double doubleType;
	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of double: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
