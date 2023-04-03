#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @accept: bytes
 * @s: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, chack;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				value++;
				check = 1;
			}
		}
	}
}
