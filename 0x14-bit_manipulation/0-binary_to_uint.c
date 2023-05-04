#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string containing binary number
 * Return: the converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int j;

	if (!b)
		return (NULL);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec = 2 * dec + (b[j] - '0');
	}
	return (dec);
}
