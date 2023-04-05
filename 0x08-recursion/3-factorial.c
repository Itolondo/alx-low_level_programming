#include <stdio.h>

/**
 * factorial - Returns factorial
 * @n: factorial to be printed
 * Return: n factorials
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
