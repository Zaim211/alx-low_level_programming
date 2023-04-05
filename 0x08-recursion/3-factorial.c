#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number
 * @n: input
 * Return: the factorial of a given number
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);

	if (n == 0)
		return (1);
	if (n > 1)
		return factorial(n) = n * factorial(n - 1);
}