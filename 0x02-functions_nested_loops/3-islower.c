/**
 * int _ islower - checks for lowercase characters
 *
 * Return: 1 if lowercase or 0 if uppercase
 */

#include "main.h"

int _islower(int c)
{
	char j;
	int lower = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
		{
			lower = 1;
		}
		return (lower);
	}
}
