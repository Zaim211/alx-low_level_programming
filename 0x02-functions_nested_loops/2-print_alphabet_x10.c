#include "main.h"

/**
 * print_alphabet - writes lower case alphabet 10x to stdo
 *
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphapet_10x(void)
{
	int i;
	int j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
