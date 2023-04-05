#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input
 *
 * Return: Natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
