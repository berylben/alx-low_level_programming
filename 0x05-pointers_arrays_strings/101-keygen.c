/**
 * main - generate random valid password
 *
 * Return: 0 always
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int man(void)
{
	int i;
	char password[9] = {0};

	srand(time(0));
	for (i = 0; i < 8; i++)
		password[i] = (rand() % 26) + 'a';
	printf("Password: %s\n", password);
	return (0);
}
