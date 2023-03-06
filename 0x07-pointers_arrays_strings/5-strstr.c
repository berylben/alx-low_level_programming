/**
 * _strstr - function that finds the first occurence of
 * the substring needle in the string haystack
 * @haystack: pointer to the string to be searched
 * @needle: pointer to be located
 * Return: a pointer to beginning of the located sustring,
 * NULL if substring is not found
 */

#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
