/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: pointer to input
 * @size: size of matrix
 * Return: always 0
 */

#include "main.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + 1);
		if (i % (size - 1) == 0 && 1 != 0 && i < size * size - 1)
			sum2 += *(a + 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
