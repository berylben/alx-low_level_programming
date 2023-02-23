/**
 * main - prints te largest prime factor in the number
 *
 * Return: Always 0 (success)
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
long int i;
long int max;
long int n;

n = 612852475143;
max = -1;

while (n % 2 == 0)
{
max = 2;
n /= 2;
}

for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
max = i;
n = n / i;
}
}

if (n > 2)
max = n;

printf("%ld\n", max);

return (0);
}
