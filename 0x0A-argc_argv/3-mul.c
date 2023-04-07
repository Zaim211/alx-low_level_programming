#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, mul;

	for (i = 0; i < argc; i++)
	{
		printf("s\n", argv[i]);
		mul *= atoi(argv[i]);
	}
	printf(Total = "%d\n", mul)
	return (0);
}
