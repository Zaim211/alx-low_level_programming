#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		_putchar("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		_putchar("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			_putchar("%02hhx\n", arr[i]);
			break;
		}
		_putchar("%02hhx ", arr[i]);
	}
	return (0);
}
