/**
 * main - entry point
 * @argc: argument input
 * @argv: array pointing to arguments
 * Return:Always (0) success
 */

#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
