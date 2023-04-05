#include <stdio.h>

/**
 * _pow_recursion - Returns the values to be printed
 * @x: Number to be raised
 * @y: number to be raised to
 * Return: -1, 1, and x * _pow_recursion(x, y -1)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
