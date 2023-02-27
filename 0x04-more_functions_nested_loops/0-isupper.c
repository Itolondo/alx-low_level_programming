#include "main.h"

/**
 * _isupper - Checks for the uppercase letter
 * @c: the letter to be checked
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
