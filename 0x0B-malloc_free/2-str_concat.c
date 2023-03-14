/**
 * str_concat - function thta concatenates two strings
 * @s1: string input
 * @s2: string input
 * Return: NULL on failure
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
	char *strr = NULL;
	unsigned int i;
	int n1;
	int n2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	strr = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (strr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		strr[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		strr[i] = s2[count];
		count++;
	}
	return (strr);
}
