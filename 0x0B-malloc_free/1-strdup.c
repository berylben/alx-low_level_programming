/**
 * _strdup - returns pointer to a newly allocated memory
 * @str: string input
 * Return: Null if str=NULL, a pointer to the duplicated string
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *strr = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	strr = (char *)malloc(n + 1 * sizeof(char));
	if (strr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strr[i] = str[i];
	} else
	{
		return (NULL);
	}
	strr[i] = '\0';
	return (strr);
}
