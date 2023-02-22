#include <unistd.h>

/**
 * main - Entry point
 * c- Prints C
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
