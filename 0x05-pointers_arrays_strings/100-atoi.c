/**
 * _atoi - converts a string to an integer
 * @s: string input
 * Return: 0 always
 */

#include "main.h"

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, ai = 0, pq = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pq *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		ai = ai + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (ai * pq);
}
