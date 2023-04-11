#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 **/
char *_strdup(char *str)
{
	char *yyy;
	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	yyy = malloc(sizeof(char) * (i + 1));

	if (yyy == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		yyy[x] = str[x];

	return (yyy);
}
