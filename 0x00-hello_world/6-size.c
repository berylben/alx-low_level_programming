/**
 * main - starting point
 *
 * a program to display sizepf various types
 * Return: 0 return value 
 */
#include <stdio.h>

int main(void)
{
	char charType;
	int intType;
	long int lintType;
	long long int llintType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", (unsigned long) sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", (unsigned long) sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long) sizeof(lintType));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long) sizeof(llintType));
	printf("Size of a float: %zu byte(s)\n", (unsigned long) sizeof(floatType));
	return (0);
}
