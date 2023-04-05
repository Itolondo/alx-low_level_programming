#include <stdio.h>

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: String to be printed
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
	putchar(*s);
}
