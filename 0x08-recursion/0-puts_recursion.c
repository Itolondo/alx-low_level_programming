#include <stdio.h>

/**
 * _puts_recursion - function like puts
 * @s: input
 * Return: 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
