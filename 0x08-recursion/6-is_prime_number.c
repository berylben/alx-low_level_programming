/**
 * is_prime_number - function that checks for prime numbers
 * @n: integer input
 * Return: 1 if input integer is a prime number, otherwise 0
 */

#include "main.h"

int is_prime_number(int n)
{
	if (n < 0 || n == 0)
		return (0);
	else if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
