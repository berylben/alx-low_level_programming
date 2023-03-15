/**
 * main - entry point
 * @argc: argument input
 * @argv: array pointing to argument
 * Return: Always (0) success
 */

#include "main.h"
#include <stdio.h>

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
