/**
 * rot13 - a function that encodes a string using rot13
 * @str: string input
 * Return: a pointer to the encoded string
 */

#include "main.h"

char *rot13(char *str)
{
	int index = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + index) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + index) == alphabet[i])
			{
				*(str + index) = rot13[i];
				break;
			}
		}
		index++;
	}

	return (str);
}
