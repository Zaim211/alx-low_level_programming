#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * @n: first number
 * @m: seconde number
 * Return: number of bit to change
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, h = 0;
	unsigned long int x;
	unsigned long int y = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = y >> i;
		if (x & 1)
			h++;
	}

	return (h);
}

