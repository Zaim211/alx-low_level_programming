#include "main.h"

/**
 * print_alphabet - writes lower case alphabet to stdo
 *
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char ch[28] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
}
