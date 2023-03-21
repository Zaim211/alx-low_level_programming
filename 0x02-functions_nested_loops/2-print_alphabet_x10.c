#include "main.h"
/**
 * print_alphabet_x10 - writes lower case alphabet 10X to stdo
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ch[28] = "abcdefghijklmnopqrstuvwxyz\n";
		int j = 0;

		while (ch[j] != '\0')
		{
			_putchar(ch[j]);
			j++;
		}
	i++;
	}
}
