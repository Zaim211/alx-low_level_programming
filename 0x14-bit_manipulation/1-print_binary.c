#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number converter to binary
 **/
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int y;

	for (i = 63; i >= 0; i--)
	{
		y = n >> i;
		if (y & 1)
		{
			_putchar('1');
			j++;
		}
		else
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
